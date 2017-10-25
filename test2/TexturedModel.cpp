#include "TexturedModel.h"

TexturedModel::TexturedModel(RawModel* rawModel, ModelTexture &texture)
	:rawModel(*rawModel), texture(texture)
{
	this->rawModel = *rawModel;
	this->texture = texture;
}

RawModel TexturedModel::getRawModel()
{
	return this->rawModel;
}

ModelTexture TexturedModel::getModelTexture()
{
	return this->texture;
}