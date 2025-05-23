@class TLKLabel, TLKMultilineText;

@interface TLKEnlargedTitleView : TLKView

@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) TLKLabel *subtitleLabel;
@property (retain, nonatomic) TLKMultilineText *title;
@property (retain, nonatomic) TLKMultilineText *subtitle;

- (void).cxx_destruct;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (id)subtitleLabelText;
- (id)titleLabelText;

@end
