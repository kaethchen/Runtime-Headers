@class NSWindow;

@interface _NSDuplicateDocumentAnimationProjectionWindow : _NSSlideAndCrossFadeAnimationProjectionWindow {
    NSWindow *sourceWindow;
    NSWindow *targetWindow;
}

- (void)dealloc;
- (id)initWithSourceWindow:(id)a0 targetWindow:(id)a1;

@end
