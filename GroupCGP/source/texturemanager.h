// COMP710 GP Framework 2025
#ifndef TEXTUREMANAGER_H
#include "texture.h"
#define TEXTUREMANAGER_H
// Library Includes:
#include <string>
#include <map>
// Forward Declarations:
class Texture;
class TextureManager
{
	// Member methods:
public:
	TextureManager();
	~TextureManager();
	bool Initialise();
	Texture* GetTexture(const char* pcFilename);
	void AddTexture(const char* key, Texture* pTexture);
protected:
private:
	TextureManager(const TextureManager& textureManager);
	TextureManager& operator=(const TextureManager& textureManager);
	// Member data:
public:
protected:
	std::map<std::string, Texture*> m_pLoadedTextures;
private:
};
#endif // TEXTUREMANAGER_H