@class NSView, NSString;
@protocol VRXVisualResponse;

@interface SiriUIVisualResponseViewController : SiriUISnippetViewController <VRXInteractionDelegate, SiriSharedUIResponseViewProvidingViewController> {
    struct CGSize { double width; double height; } _lastContentSize;
    BOOL _stoleKeyWindow;
    BOOL _isPresentedWithSmartDialogText;
}

@property (retain) NSView<VRXVisualResponse> *visualResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillDisappear;
- (void)informHostOfViewResize:(struct CGSize { double x0; double x1; })a0;
- (void)navigateWithAceCommand:(id)a0;
- (void)navigateWithResponseData:(id)a0;
- (void)performAceCommand:(id)a0;
- (void)performShowResponse:(id)a0;
- (void)requestsKeyWindow;
- (double)desiredHeightForWidth:(double)a0;
- (BOOL)hasSash;
- (void)nextSnippetDidLoadNotification:(id)a0;
- (id)currentResponseView;
- (id)initWithVisualResponse:(id)a0;
- (BOOL)isPresentedWithSmartDialogText;
- (void)nextCardDidLoadNotification:(id)a0;
- (void)setIsPresentedWithSmartDialogText:(BOOL)a0;
- (void)siriDidUpdateASRWithRecognition:(id)a0;
- (void)updateSharedState:(id)a0;

@end
