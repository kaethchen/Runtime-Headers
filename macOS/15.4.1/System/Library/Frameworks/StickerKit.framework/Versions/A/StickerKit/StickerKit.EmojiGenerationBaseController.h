@interface StickerKit.EmojiGenerationBaseController : NSViewController {
    void /* unknown type, empty encoding */ useCachedImagesForDebugging;
    void /* unknown type, empty encoding */ pillVC;
    void /* unknown type, empty encoding */ _pillViewModel;
    void /* unknown type, empty encoding */ pillContainer;
    void /* unknown type, empty encoding */ promptEntryView;
    void /* unknown type, empty encoding */ carouselVC;
    void /* unknown type, empty encoding */ feedbackHelper;
    void /* unknown type, empty encoding */ bottomLabel;
    void /* unknown type, empty encoding */ pillLabel;
    void /* unknown type, empty encoding */ contextMenuButton;
    void /* unknown type, empty encoding */ autoScroll;
    void /* unknown type, empty encoding */ macPersonPopupButton;
    void /* unknown type, empty encoding */ macEditButton;
    void /* unknown type, empty encoding */ _ambiguityManager;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ effectiveState;
    void /* unknown type, empty encoding */ isGenmojiAvailable;
    void /* unknown type, empty encoding */ captionText;
    void /* unknown type, empty encoding */ hostSceneID;
    void /* unknown type, empty encoding */ isConnectedToNetwork;
    void /* unknown type, empty encoding */ networkMonitor;
    void /* unknown type, empty encoding */ isShowingErrorState;
    void /* unknown type, empty encoding */ currentEmojiQueryInfo;
    void /* unknown type, empty encoding */ typingTask;
    void /* unknown type, empty encoding */ performingInitialPersonCheck;
    void /* unknown type, empty encoding */ personCheckSemaphore;
    void /* unknown type, empty encoding */ showSkinColorControl;
    void /* unknown type, empty encoding */ blobStatusViewModel;
    void /* unknown type, empty encoding */ _blobStatusHostingController;
    void /* unknown type, empty encoding */ _blobStatusView;
    void /* unknown type, empty encoding */ skinColorSelectionVC;
    void /* unknown type, empty encoding */ skinColorSelectionView;
    void /* unknown type, empty encoding */ initialPrompt;
    void /* unknown type, empty encoding */ personPillViewModelHasFinishLoading;
    void /* unknown type, empty encoding */ promptCharacterSet;
    void /* unknown type, empty encoding */ wasShowingSheet;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)didSelectAmbiguityMenuItem:(id)a0;
- (void)didSelectChoosePersonMenuItem:(id)a0;

@end
