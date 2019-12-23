#ifndef RESOURCE_H
#define RESOURCE_H

#include <istream>
#include <ostream>
#include <string>

#include "ResourceType.h"

namespace SoftUni {
	class Resource {
	private:
		int id;				// An integer id
		ResourceType type;	// A ResourceType – one of Presentation, Demo, or Video
		std::string link;	// A string representing the link to the resource

	public:
		Resource() = default;

		Resource(int id, ResourceType& type, std::string& link) :
			id(id), type(type), link(link) {}

		int getId() const { return this->id; }

		ResourceType getType() const { return this->type; }

		bool operator<(const Resource& r) const { return id < r.id; }

		friend std::istream& operator>>(std::istream& inp, Resource& r);
		friend std::ostream& operator<<(std::ostream& out, const Resource& r);

	};

	std::istream& operator>>(std::istream& in, Resource& resource) {
		in >> resource.id;
		std::string sType;
		in >> sType;
		if (sType == "Presentation") {
			resource.type = PRESENTATION;
		}
		else if (sType == "Demo") {
			resource.type = DEMO;
		}
		else if (sType == "Video") {
			resource.type = VIDEO;
		}
		in >> resource.link;
		return in;
	}

	std::ostream& operator<<(std::ostream& out, const Resource& resource) {
		out << resource.id << " " << resource.type << " " << resource.link;
		return out;
	}
}
#endif // !RESOURCE_H 