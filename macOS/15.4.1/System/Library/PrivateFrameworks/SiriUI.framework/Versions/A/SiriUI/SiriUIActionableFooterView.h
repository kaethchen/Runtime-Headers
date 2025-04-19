@class NSString, SiriUIKeyline, NSButton, SiriUISnippetViewController;
@protocol SiriUIActionableFooterViewDelegate;

@interface SiriUIActionableFooterView : SiriUIReusableFooterView {
    NSButton *_button;
    SiriUIKeyline *_keyline;
    SiriUISnippetViewController *_snippetViewController;
}

@property (weak, nonatomic) id<SiriUIActionableFooterViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasKeyline;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)layout;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_buttonTapped:(id)a0;
- (void)setSnippetViewController:(id)a0;
- (id)snippetViewController;

@end
