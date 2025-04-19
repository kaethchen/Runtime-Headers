@class NSString, OMSlideshow, OMMarimbaViewController, OKDocumentViewController;
@protocol OMSlideshowViewControllerPrepareDelegate, OMSlideshowViewControllerPlaybackDelegate;

@interface OMSlideshowViewController : OFNSViewController <MREditingDelegate, OKDocumentViewControllerDelegate, OKDocumentViewControllerEditingDelegate> {
    OMMarimbaViewController *_marimbaViewController;
    OKDocumentViewController *_opusViewController;
    NSString *_pendingGotoKeyPath;
    NSString *_marimbaStyleID;
    id /* block */ _pendingGotoCompletionHandler;
    int _isReadyToPlayCounter;
    struct { unsigned char isInEditMode : 1; unsigned char isInteractive : 1; unsigned char isReadyToNavigate : 1; unsigned char isVisible : 1; } _flags;
}

@property BOOL unloadsOnDisappear;
@property (retain) OMSlideshow *slideshow;
@property (readonly) BOOL isPlaying;
@property (readonly) BOOL isEditable;
@property (nonatomic) BOOL isInEditMode;
@property (nonatomic) BOOL isInteractive;
@property (readonly) BOOL isStretchableWithoutReauthoring;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cleanAperture;
@property (nonatomic) double audioVolume;
@property id<OMSlideshowViewControllerPrepareDelegate> prepareDelegate;
@property id<OMSlideshowViewControllerPlaybackDelegate> playbackDelegate;
@property (nonatomic) BOOL logRenderingTimes;
@property (readonly) NSString *renderingLogFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_commonInit;
- (BOOL)acceptsFirstResponder;
- (void)loadView;
- (void)play;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithSlideshow:(id)a0;
- (void)gotoNextPage:(BOOL)a0;
- (void)gotoPreviousPage:(BOOL)a0;
- (void)_applySlideshow;
- (id)__internalMarimbaView;
- (id)__internalOpusDocumentViewController;
- (void)_slideshowFinishedUpdating;
- (void)_slideshowStartedToUpdate;
- (unsigned long long)authorWithTheme:(id)a0 mediaURLs:(id)a1 attributes:(id)a2 progressHandler:(id /* block */)a3 resultHandler:(id /* block */)a4;
- (BOOL)beginEditingTextElement:(id)a0 inContainer:(id)a1 clickAt:(struct CGPoint { double x0; double x1; })a2 vertices:(struct CGPoint { double x0; double x1; }[4] *)a3;
- (void)couchPotatoPlaybackFinished;
- (void)determineStretchabilityWithoutReauthoring:(struct CGSize { double x0; double x1; })a0;
- (void)documentViewController:(id)a0 changedFrameOfMainNavigatorTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)documentViewController:(id)a0 didChangeTextForWidget:(id)a1 toSettings:(id)a2;
- (void)documentViewControllerDidPrepareForDisplay:(id)a0;
- (void)endEditingTextElement:(id)a0 inContainer:(id)a1;
- (void)gotoItemAtSynopsisPath:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)gotoPoster:(BOOL)a0;
- (void)marimbaPlaybackIsOver:(id)a0;
- (void)setIsStretchableWithoutReauthoring:(BOOL)a0;
- (id)synopsisPath;
- (void)warmupAndPlay;

@end
