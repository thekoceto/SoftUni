#ifndef LECTURE_H
#define LECTURE_H

#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>

namespace SoftUni {

	class Lecture {
	private:
		std::vector<Resource> resources;
		std::map<ResourceType, int> numberOfAppearance;

	public:
		void setNumberOfAppearance(const std::map<ResourceType, int>& numberOfAppearance){
			this->numberOfAppearance = numberOfAppearance;
		}

		std::vector<Resource> getResources() const {
			return this->resources;
		}

		friend Lecture& operator<<(Lecture& lecture, const Resource& resource);

		std::vector<Resource>::iterator begin() { return resources.begin(); }
		std::vector<Resource>::iterator end() { return resources.end(); }
		
		std::string operator[](ResourceType rt);
		friend std::vector<ResourceType>& operator<<(std::vector<ResourceType>& rs, Lecture& lecture);
	};

	bool myComparator(const Resource& resource1, const Resource& resource2) {
		return resource1.getId() < resource2.getId();
	}

	Lecture& operator<<(Lecture& lecture, const Resource& resource) {

		auto it = lecture.resources.begin();

		while (it != lecture.resources.end()) {
			if (it->getId() == resource.getId()) {
				lecture.resources.erase(it);
				break;
			}
			else {
				++it;
			}
		}

		lecture.resources.push_back(resource);
		std::sort(lecture.resources.begin(), lecture.resources.end(), myComparator);

		return lecture;
	}

	std::string Lecture::operator[](ResourceType rt) {

		if (numberOfAppearance[rt] > 0)
			return std::to_string(numberOfAppearance[rt]);

		return "";
	}

	void addResourceType(std::vector<ResourceType>& resourceTypeVector, Lecture& lecture, const ResourceType resourceType) {

		for (const Resource& resource : lecture.getResources()) {
			if (resource.getType() == resourceType) {
				resourceTypeVector.push_back(resourceType);
				break;
			}
		}
	}
	
	std::vector<ResourceType>& operator<<(std::vector<ResourceType>& resourceTypeVector, Lecture& lecture) {
		
		addResourceType(resourceTypeVector, lecture, ResourceType::PRESENTATION);
		addResourceType(resourceTypeVector, lecture, ResourceType::DEMO);
		addResourceType(resourceTypeVector, lecture, ResourceType::VIDEO);

		std::map<ResourceType, int> updatedNumberOfAppearance;

		for (const Resource& resource : lecture.getResources())
			updatedNumberOfAppearance[resource.getType()]++;

		lecture.setNumberOfAppearance(updatedNumberOfAppearance);

		return resourceTypeVector;
	}

}
#endif // !LECTURE_H