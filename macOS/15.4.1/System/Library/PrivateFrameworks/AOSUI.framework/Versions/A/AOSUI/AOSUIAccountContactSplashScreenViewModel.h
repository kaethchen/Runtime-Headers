@class NSView;
@protocol AAOBBulletedWelcomeControllerModelProtocol;

@interface AOSUIAccountContactSplashScreenViewModel : AOSUIAccountContactBaseViewModel {
    id<AAOBBulletedWelcomeControllerModelProtocol> _model;
    NSView *_contentView;
    long long _templateContentViewLayout;
}

- (void).cxx_destruct;
- (void)setContentView:(id)a0;
- (id)contentView;
- (id)initWithModel:(id)a0;
- (id)_setupOBTemplatePartBulletList;
- (void)setTemplateContentViewLayout:(long long)a0;
- (long long)templateContentViewLayout;

@end
