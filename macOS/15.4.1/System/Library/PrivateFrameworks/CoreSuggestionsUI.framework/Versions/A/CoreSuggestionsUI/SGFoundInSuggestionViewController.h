@class NSString, SGFoundInSuggestionPresenter;

@interface SGFoundInSuggestionViewController : NSViewController <SGSuggestionPresenterDelegate>

@property (readonly) SGFoundInSuggestionPresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)suggestionPresenterWantsToHideBanner:(id)a0;
- (void)suggestionPresenterWantsToShowBanner:(id)a0;

@end
