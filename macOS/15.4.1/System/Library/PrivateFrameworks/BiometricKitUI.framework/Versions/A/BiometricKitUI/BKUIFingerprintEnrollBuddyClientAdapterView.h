@class OBTemplateView;

@interface BKUIFingerprintEnrollBuddyClientAdapterView : OBTemplateView

@property (retain, nonatomic) OBTemplateView *hostedView;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)title;
- (id)headline;
- (void)setHeadline:(id)a0;
- (long long)layoutStyle;
- (id)bodyText;
- (void)setBodyText:(id)a0;
- (id)contentArea;
- (id)linkButton;
- (long long)bodyTextAlignment;
- (BOOL)needsExtraWideContent;
- (void)setTopImageTintColor:(id)a0;
- (id)topContent;

@end
