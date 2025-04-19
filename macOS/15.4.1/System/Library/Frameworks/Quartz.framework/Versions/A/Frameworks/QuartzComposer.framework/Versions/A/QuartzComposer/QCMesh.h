@class QCImage;

@interface QCMesh : QCObject <NSCoding> {
    struct _QCMeshInternal { id x0[5]; union { float x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } x1; } *_meshComponents;
    QCImage *_texture[16];
    struct __C3DGeometry { } *_c3DSourceGeometry;
    struct _QCC3DMesh { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __C3DGeometry *x1; id x2[26]; unsigned long long x3; } *_c3DMesh;
    struct _QCMeshBoundingBox { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; } *_boundingBox;
    double *_transformation;
    unsigned long long _flags;
    unsigned long long _componentDirtyFlag;
    unsigned long long _componentUpdatedFlag;
    void *_unused5[4];
}

@property (readonly) int mode;
@property (readonly) float pointSize;
@property (readonly) unsigned long long volumeWidth;
@property (readonly) unsigned long long volumeHeight;
@property (readonly) unsigned long long volumeDepth;
@property (readonly) struct _QCMeshBoundingBox { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; } *boundingBox;
@property double *transformation;
@property BOOL flipCulling;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMode:(int)a0;
- (void)finalize_QCMesh;
- (struct _QCC3DMesh { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __C3DGeometry *x1; id x2[26]; unsigned long long x3; } *)createC3DMeshForContext:(id)a0 options:(id)a1;
- (id)imageAtIndex:(unsigned long long)a0 forManager:(id)a1;
- (id)initWithC3DGeometry:(struct __C3DGeometry { } *)a0;
- (id)initWithMesh:(id)a0;
- (id)initWithMesh:(id)a0 byReplacingStreamsAndTypes:(id)a1;
- (id)initWithMode:(int)a0 streamsAndTypes:(id)a1;
- (id)streamOfType:(int)a0 forManager:(id)a1;

@end
