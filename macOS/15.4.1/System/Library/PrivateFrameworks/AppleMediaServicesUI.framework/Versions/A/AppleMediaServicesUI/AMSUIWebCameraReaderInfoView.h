@class NSButton, NSTextField;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebCameraReaderInfoView : AMSUICommonView

@property (retain, nonatomic) NSButton *bottomLink;
@property (retain, nonatomic) id<AMSUIWebActionRunnable> bottomLinkAction;
@property (retain, nonatomic) NSTextField *primaryLabel;
@property (retain, nonatomic) NSTextField *secondaryLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_bottomLinkSelected:(id)a0;
- (id)_createButtonWithTarget:(id)a0 selector:(SEL)a1;
- (id)_createLabelWithLines:(long long)a0 title:(BOOL)a1;

@end
