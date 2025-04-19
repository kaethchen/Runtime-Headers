@class MRContext;

@interface MRMesh : NSObject {
    MRContext *_context;
    unsigned long long _countOfVertices;
    unsigned long long _countOfIndices;
    unsigned int _vao;
    unsigned int _staticVBO;
    unsigned int _dynamicVBO;
    unsigned int _streamVBO;
    unsigned int _indexBuffer;
    char _staticVBOFeatures;
    char _dynamicVBOFeatures;
    char _streamVBOFeatures;
    char _type;
}

- (void)dealloc;
- (void)cleanup;
- (void)draw;
- (void)bind;
- (void)unbind;
- (void)_updateVBO:(unsigned int *)a0 andFeatures:(char *)a1 withPointer:(void *)a2 andFeatures:(char)a3;
- (id)initWithContext:(id)a0 andCountOfVertices:(unsigned long long)a1;
- (void)makeGenericThenRectangularIndexedTriangleStripStartingAtIndex:(unsigned long long)a0 withWidth:(unsigned long long)a1 andHeight:(unsigned long long)a2;
- (void)makeQuads;
- (void)makeRectangularIndexedTriangleStripWithWidth:(unsigned long long)a0 andHeight:(unsigned long long)a1;
- (void)makeTriangleStrip;
- (void)makeTriangles;
- (void)setDynamicVBOVertex2DColorPointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; } *)a0;
- (void)setDynamicVBOVertex2DColorTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } *)a0;
- (void)setDynamicVBOVertex2DPointer:(struct { float x0; float x1; } *)a0;
- (void)setDynamicVBOVertex2DTexturePointer:(struct { float x0; float x1; float x2; float x3; } *)a0;
- (void)setDynamicVBOVertex3DColorTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } *)a0;
- (void)setDynamicVBOVertex3DNormalPointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; } *)a0;
- (void)setDynamicVBOVertex3DNormalTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } *)a0;
- (void)setDynamicVBOVertex3DPointer:(struct { float x0; float x1; float x2; } *)a0;
- (void)setDynamicVBOVertex3DTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; } *)a0;
- (void)setDynamicVBOVertexNormalPointer:(struct { float x0; float x1; float x2; } *)a0;
- (void)setDynamicVBOVertexNormalTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; } *)a0;
- (void)setDynamicVBOVertexTexturePointer:(struct { float x0; float x1; } *)a0;
- (void)setStaticVBOVertex2DColorPointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; } *)a0;
- (void)setStaticVBOVertex2DColorTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } *)a0;
- (void)setStaticVBOVertex2DPointer:(struct { float x0; float x1; } *)a0;
- (void)setStaticVBOVertex2DTexturePointer:(struct { float x0; float x1; float x2; float x3; } *)a0;
- (void)setStaticVBOVertex3DColorTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } *)a0;
- (void)setStaticVBOVertex3DNormalPointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; } *)a0;
- (void)setStaticVBOVertex3DNormalTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } *)a0;
- (void)setStaticVBOVertex3DPointer:(struct { float x0; float x1; float x2; } *)a0;
- (void)setStaticVBOVertex3DTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; } *)a0;
- (void)setStaticVBOVertexNormalPointer:(struct { float x0; float x1; float x2; } *)a0;
- (void)setStaticVBOVertexNormalTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; } *)a0;
- (void)setStaticVBOVertexTexturePointer:(struct { float x0; float x1; } *)a0;
- (void)setStreamVBOVertex2DColorPointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; } *)a0;
- (void)setStreamVBOVertex2DColorTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } *)a0;
- (void)setStreamVBOVertex2DPointer:(struct { float x0; float x1; } *)a0;
- (void)setStreamVBOVertex2DTexturePointer:(struct { float x0; float x1; float x2; float x3; } *)a0;
- (void)setStreamVBOVertex3DColorTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } *)a0;
- (void)setStreamVBOVertex3DNormalPointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; } *)a0;
- (void)setStreamVBOVertex3DNormalTexture01Pointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; } *)a0;
- (void)setStreamVBOVertex3DNormalTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } *)a0;
- (void)setStreamVBOVertex3DPointer:(struct { float x0; float x1; float x2; } *)a0;
- (void)setStreamVBOVertex3DTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; } *)a0;
- (void)setStreamVBOVertexNormalPointer:(struct { float x0; float x1; float x2; } *)a0;
- (void)setStreamVBOVertexNormalTexturePointer:(struct { float x0; float x1; float x2; float x3; float x4; } *)a0;
- (void)setStreamVBOVertexTexturePointer:(struct { float x0; float x1; } *)a0;

@end
