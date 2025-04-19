@class NSRegion;

@interface NSViewBackingLayerContents : NSObject <CARenderValue> {
    void /* unknown type, empty encoding */ _backingStore;
    void /* unknown type, empty encoding */ _isUpdating;
    void /* unknown type, empty encoding */ _invalidationShape;
    void /* unknown type, empty encoding */ _image;
    void /* unknown type, empty encoding */ _layer;
    void /* unknown type, empty encoding */ _contentLayer;
}

@property (nonatomic) void /* unknown type, empty encoding */ pixelTransform;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } definedRect;
@property (nonatomic, readonly) NSRegion *definedRegion;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } affectedRect;
@property (nonatomic, readonly) NSRegion *affectedRegion;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dirtyRect;
@property (nonatomic, readonly) NSRegion *dirtyRegion;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } retainedRect;
@property (nonatomic, retain) NSRegion *retainedRegion;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } requiredRect;
@property (nonatomic, retain) NSRegion *requiredRegion;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void *)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (void)invalidateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)update:(id /* block */)a0;
- (id)_dumpDisplayListToPath:(id)a0;
- (void)addLayer:(id)a0;
- (void)invalidateRegion:(id)a0;
- (void)removeLayer:(id)a0;

@end
