@class NSStatusItem;

@interface NSPrivacyIndicatorView : NSView {
    NSStatusItem *_indicatedStatusItem;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)renewGState;
- (void)viewDidMoveToWindow;

@end
