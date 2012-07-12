

#ifndef VERTEX_H
#define VERTEX_H

#include "d3dUtil.h"

struct Vertex
{
	D3DXVECTOR3 pos;
	D3DXVECTOR3 normal;
	D3DXCOLOR diffuse;
	D3DXCOLOR specular;
};
 
#endif // VERTEX_H