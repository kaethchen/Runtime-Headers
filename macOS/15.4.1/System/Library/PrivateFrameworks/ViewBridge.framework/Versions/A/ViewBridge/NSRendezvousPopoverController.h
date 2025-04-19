@interface NSRendezvousPopoverController : NSRendezvousChildPanelController

+ (unsigned long long)acceptableStyleMask;
+ (void)addBridgeKeys:(id)a0;

- (id)popoverAccessibilityParent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_serviceWindowFrameForRemoteViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)objectToObserveForKey:(id)a0 withWindow:(id)a1;

@end
