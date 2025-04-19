@class NSColor;

@interface KHButton : NSButton {
    NSColor *_tintColor;
}

@property (retain, nonatomic) NSColor *tintColor;

+ (id)auxiliaryButton;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)_updateTitle;
- (void)viewWillMoveToSuperview:(id)a0;

@end
