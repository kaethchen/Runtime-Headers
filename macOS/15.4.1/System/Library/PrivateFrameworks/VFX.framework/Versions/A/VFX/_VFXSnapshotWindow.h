@interface _VFXSnapshotWindow : NSWindow

- (BOOL)_visibleAndCanBecomeKeyLimitedOK:(BOOL)a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)isKeyWindow;
- (BOOL)isMainWindow;
- (BOOL)isVisible;
- (unsigned long long)occlusionState;
- (id)screen;

@end
