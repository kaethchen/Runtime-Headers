@class OBPrivacyPresenter;

@interface SODictationEnableAlert : NSAlert

@property (retain) OBPrivacyPresenter *privacyPresenter;

- (void)dealloc;
- (id)init;
- (void)_clickedDictationPrivacy:(id)a0;

@end
