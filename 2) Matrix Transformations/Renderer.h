#pragma once
#include "../nclgl/OGLRenderer.h"
#include "Camera.h"

class Renderer : public OGLRenderer{
public:
	Renderer(Window& parent);
	virtual ~Renderer(void);

	virtual void RenderScene();
	virtual void UpdateScene(float dt);

	void SwitchToPerspective();
	void SwitchToOrthographic();

	inline void SetScale(float s) { scale = s; }
	inline void SetRotation(float r) { rotation = r; }
	inline void SetPosition(Vector3 p) { position = p; }
	inline void Setfov(float f) { fov = f; }
private:
	Mesh* triangle;
	Shader* matrixShader;
	float scale;
	float rotation;
	float fov;
    Vector3 position;
	Camera* camera;
};
