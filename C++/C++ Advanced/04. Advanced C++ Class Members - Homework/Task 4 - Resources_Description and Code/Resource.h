#ifndef RESOURCE_H
#define RESOURCE_H

#include <istream>
#include <ostream>
#include <string>

#include "ResourceType.h"

namespace SoftUni {
	class Resource {
	private:
		int id;				//-	An integer id
		ResourceType type;	//- A ResourceType – one of Presentation, Demo, or Video
		std::string link;	//- A string representing the link to the resource

	public:
		Resource() = default;

		Resource(int id, ResourceType& type, std::string& link) :
			id(id), type(type), link(link) {}

		ResourceType getType() const {
			return this->type;
		}

		bool operator<(const Resource& r) const {
			return id < r.id;
		}

		friend std::istream& operator>>(std::istream& inp, Resource& r);
		friend std::ostream& operator<<(std::ostream& out, const Resource& r);


	};

	std::istream& operator>>(std::istream& in, Resource& r) {
		in >> r.id;
		std::string sType;
		in >> sType;
		if (sType == "Presentation") {
			r.type = PRESENTATION;
		}
		else if (sType == "Demo") {
			r.type = DEMO;
		}
		else if (sType == "Video") {
			r.type = VIDEO;
		}
		in >> r.link;
		return in;
	}

	std::ostream& operator<<(std::ostream& out, const Resource& r) {
		out << r.id << " " << r.type << " " << r.link;
		return out;
	}
}
#endif // !RESOURCE_H 