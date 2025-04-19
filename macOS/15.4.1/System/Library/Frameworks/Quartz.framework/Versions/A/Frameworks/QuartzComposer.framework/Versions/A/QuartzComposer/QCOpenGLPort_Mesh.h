@class QCArray, QCMesh, QCImagePort_Cache;

@interface QCOpenGLPort_Mesh : QCMeshPort <QCOpenGLPort> {
    QCMesh *_savedMesh;
    QCArray *_vertices;
    QCArray *_colors;
    QCArray *_normals;
    QCArray *_indices;
    QCArray *_texCoords;
    struct { int saveSize; int saveType; int saveStride; unsigned char saveEnabled; unsigned char ptrHasChanged; void *savePointer; void *unused[4]; } _saveVertexState;
    struct { int saveSize; int saveType; int saveStride; unsigned char saveEnabled; unsigned char ptrHasChanged; void *savePointer; void *unused[4]; } _saveColorState;
    struct { int saveSize; int saveType; int saveStride; unsigned char saveEnabled; unsigned char ptrHasChanged; void *savePointer; void *unused[4]; } _saveNormalState;
    struct { int saveSize; int saveType; int saveStride; unsigned char saveEnabled; unsigned char ptrHasChanged; void *savePointer; void *unused[4]; } _saveTexCoordState;
    struct { int saveSize; int saveType; int saveStride; unsigned char saveEnabled; unsigned char ptrHasChanged; void *savePointer; void *unused[4]; } _saveIndexState;
    QCImagePort_Cache *_texturePort[16];
    int _saveLineSmoothHint;
    int _sourceFunction;
    int _destFunction;
    unsigned char _saveLineSmoothEnabled;
    unsigned char _saveBlendingEnabled;
    void *_unused6[4];
}

- (void)dealloc;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (void)setOnOpenGLContext:(id)a0;
- (void)setRawValue:(id)a0;
- (void)unsetOnOpenGLContext:(id)a0;

@end
