@interface GESSTriMesh : GESSTriMeshBase

- (id)init;
- (BOOL)getFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)getPositions:(float *)a0 size:(unsigned long long)a1;
- (BOOL)getTexCoordFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)getTexCoords:(float *)a0 size:(unsigned long long)a1;
- (BOOL)getVertexColors:(float *)a0 size:(unsigned long long)a1;
- (BOOL)getVertexNormalFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)getVertexNormals:(float *)a0 size:(unsigned long long)a1;
- (void *)meshImpl;
- (void)setMeshImpl:(const void *)a0;

@end
