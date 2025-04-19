@class NSString, SiriUICompactViewController, SiriSharedUICompactViewModelController;
@protocol SiriUIPresentationDelegate, SiriUIPresentationDataSource;

@interface SiriUICompactPresentation : NSObject <SiriUICompactViewControllerDelegate, SiriSharedUICompactViewModelControllerDelegate, SiriUIPresentation> {
    SiriUICompactViewController *_compactViewController;
}

@property (retain, nonatomic) SiriSharedUICompactViewModelController *activeViewModelController;
@property (nonatomic, getter=_inputType, setter=_setInputType:) long long inputType;
@property (readonly, nonatomic) BOOL isPresentingContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SiriUIPresentationDataSource> dataSource;
@property (weak, nonatomic) id<SiriUIPresentationDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 dataSource:(id)a1;
- (id)viewController;
- (double)contentHeight;
- (BOOL)alwaysShowRecognizedSpeech;
- (void)conversation:(id)a0 didChangeWithTransaction:(id)a1;
- (id)_activeConversation;
- (void)_activeConversationDidChange;
- (id)_activeRequestOptions;
- (id)_conversationIdentifiers;
- (void)_showFullScreenDimmingLayer;
- (long long)_viewModelInputTypeForRequestInputType:(long long)a0;
- (void)activeRequestOptionsDidChange;
- (void)compactViewController:(id)a0 didFinishEditingWithText:(id)a1 originalUserUtterance:(id)a2 selectionResults:(id)a3;
- (void)compactViewController:(id)a0 makeKeyWithCompletion:(id /* block */)a1;
- (void)compactViewController:(id)a0 openURL:(id)a1 completion:(id /* block */)a2;
- (void)compactViewController:(id)a0 performAceCommands:(id)a1;
- (void)compactViewController:(id)a0 requestsDismissalWithReason:(unsigned long long)a1;
- (void)compactViewController:(id)a0 requestsFocusChangeToAccessibilityElement:(id)a1;
- (void)compactViewController:(id)a0 viewDidAppearWithAceObject:(id)a1;
- (void)compactViewControllerHeightDidChange:(id)a0;
- (void)compactViewModelController:(id)a0 didProcessConversationItemsWithIdentifiers:(id)a1;
- (id)compactViewModelController:(id)a0 requestsTranscriptItemForAceObject:(id)a1;
- (BOOL)compactViewModelControllerShouldAlwaysShowRecognizedSpeech:(id)a0;
- (void)didChangeWindowHeight:(BOOL)a0;
- (void)didPresentContentForCompactViewController:(id)a0;
- (void)didReceiveRevealRecognizedSpeechCommand:(id)a0;
- (void)didReceiveUpdateVisualResponseCommand:(id)a0;
- (id)domainObjectStoreForCompactViewController:(id)a0;
- (id)effectiveCoreLocationBundleForCompactViewController:(id)a0;
- (void)immersiveExperienceRequestedForViewModelController:(id)a0;
- (long long)inputTypeForCompactViewModelController:(id)a0;
- (struct CGSize { double x0; double x1; })maxSizeForSnippet;
- (double)maximumHeightForCompactViewController:(id)a0;
- (void)releaseKeyForCompactViewController:(id)a0;
- (void)setOffersDismissal:(BOOL)a0;
- (BOOL)siriDeviceLockedForViewModelController:(id)a0;
- (void)siriDidUpdateASRWithRecognition:(id)a0;
- (int)viewRegionForPresentedAceObject:(id)a0;

@end
