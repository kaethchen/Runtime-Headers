@interface NSSemiAutonomousRendezvousWindowController : NSRendezvousWindowController

+ (unsigned long long)acceptableStyleMask;
+ (void)addBridgeKeys:(id)a0;
+ (void)addPanelBridgeKeys:(id)a0;

- (id)appearance;
- (BOOL)shouldInvalidateWhenOrderingOut;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_serviceWindowFrameForRemoteViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldNormalizeAppearance;
- (void)_viewDidChangeEffectiveAppearance:(id)a0;
- (id)accessibilityRoot;
- (BOOL)allowsWindowFrameOriginChanges;
- (unsigned long long)awakeFromRemoteView;
- (id)objectToObserveForKey:(id)a0 withWindow:(id)a1;
- (BOOL)remoteViewSizeChanged:(struct CGSize { double x0; double x1; })a0 transaction:(id)a1;
- (void)windowWillOrder:(long long)a0 relativeTo:(long long)a1;

@end
