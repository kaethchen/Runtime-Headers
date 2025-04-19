@class NSTextField, NSView, NSMutableArray, NSButton;
@protocol PKPassPageDotViewDelegate, NSStackViewDelegate;

@interface PKPassPageDotView : NSStackView {
    NSView *_enclosingView;
    NSMutableArray *_dotButtons;
    NSButton *_selectedButton;
    NSTextField *_overflowLabel;
}

@property (weak) id<PKPassPageDotViewDelegate, NSStackViewDelegate> delegate;

- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dotClicked:(id)a0;
- (void)selectPassIndex:(unsigned long long)a0 withCount:(unsigned long long)a1;

@end
