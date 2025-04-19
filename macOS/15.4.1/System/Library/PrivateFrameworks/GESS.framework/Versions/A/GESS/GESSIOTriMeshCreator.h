@interface GESSIOTriMeshCreator : GESSIOPolyMeshCreator

- (BOOL)create:(id)a0;
- (BOOL)setFaceGroupIDs:(unsigned short *)a0 size:(unsigned long long)a1;
- (BOOL)setFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)setPositions:(float *)a0 size:(unsigned long long)a1;
- (BOOL)setTexCoordFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)setTexCoords:(float *)a0 size:(unsigned long long)a1;
- (BOOL)setVertexColors:(float *)a0 size:(unsigned long long)a1;
- (BOOL)setVertexNormalFaces:(unsigned int *)a0 size:(unsigned long long)a1;
- (BOOL)setVertexNormals:(float *)a0 size:(unsigned long long)a1;

@end
