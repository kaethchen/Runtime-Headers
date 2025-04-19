@class OBPrivacyPresenter, TUIKTLearnMoreViewController;

@interface TUIKTLearnMorePresenter : NSObject {
    OBPrivacyPresenter *_privacyPresenter;
    TUIKTLearnMoreViewController *_learnMoreViewController;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)presentWithPresentingWindow:(id)a0;

@end
