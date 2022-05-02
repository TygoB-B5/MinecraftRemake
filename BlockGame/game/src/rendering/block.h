#pragma once
#include "glm/glm.hpp"

namespace blockcraft
{

	struct blockVertex
	{

		blockVertex(glm::vec3 position = { 0.0f, 0.0f, 0.0f }, glm::vec2 texCoord = { 0.0f, 0.0f })
			: Position(position), TexCoord(texCoord)
		{}


		glm::vec3 Position;
		glm::vec2 TexCoord;
	};

	struct blockSides
	{
		static glm::vec3 bottom[4];
		static glm::vec3 top[4];
		static glm::vec3 left[4];
		static glm::vec3 right[4];
		static glm::vec3 front[4];
		static glm::vec3 back[4];
	};

}