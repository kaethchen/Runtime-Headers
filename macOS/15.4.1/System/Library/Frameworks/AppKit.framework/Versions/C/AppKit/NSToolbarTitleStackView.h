@class NSView;

@interface NSToolbarTitleStackView : NSView {
    NSView *_primaryTitleView;
    NSView *_subtitleView;
}

@property (retain) NSView *primaryTitleView;
@property (retain) NSView *subtitleView;

- (void)dealloc;
- (void).cxx_destruct;
- (id)declaredLayoutConstraints;

@end
