@interface NSStatusBarContentView : NSView {
    BOOL _hasCAShadow;
}

@property BOOL hasCAShadow;

- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (void)updateLayer;

@end
