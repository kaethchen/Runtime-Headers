@interface CALayerHost : CALayer

@property unsigned int contextId;
@property BOOL inheritsSecurity;
@property BOOL resizesHostedContext;
@property BOOL preservesFlip;
@property BOOL stopsHitTestTransformAccumulation;
@property BOOL stopsSecureSuperlayersValidation;
@property BOOL transformsToScreenSpace;
@property BOOL sequestered;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)allLayerHosts;

- (void)dealloc;
- (id)init;
- (void)didChangeValueForKey:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;

@end
