@class NSString;
@protocol CABackdropLayerDelegate, CALayerDelegate;

@interface CABackdropLayer : CALayer

@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *groupName;
@property BOOL usesGlobalGroupNamespace;
@property (copy) NSString *groupNamespace;
@property double scale;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backdropRect;
@property double marginWidth;
@property BOOL disablesOccludedBackdropBlurs;
@property BOOL captureOnly;
@property BOOL allowsInPlaceFiltering;
@property BOOL reducesCaptureBitDepth;
@property BOOL ignoresScreenClip;
@property BOOL preallocatesScreenArea;
@property double bleedAmount;
@property BOOL windowServerAware;
@property (getter=isInverseMeshed) BOOL inverseMeshed;
@property BOOL allowsSubstituteColor;
@property struct CGColor { } *substituteColor;
@property BOOL ignoresOffscreenGroups;
@property double zoom;
@property (weak) id<CABackdropLayerDelegate, CALayerDelegate> delegate;

+ (void)initialize;
+ (id)defaultValueForKey:(id)a0;
+ (id)CA_attributes;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)_hasRenderLayerSubclass;

- (void)didChangeValueForKey:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)_renderBackgroundInContext:(struct CGContext { } *)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;

@end
