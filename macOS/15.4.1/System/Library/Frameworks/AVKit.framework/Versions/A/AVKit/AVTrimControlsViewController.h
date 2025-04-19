@class NSView, NSString, AVTouchBarTrimControlsViewController, NSCustomTouchBarItem, AVPlayerControllerTimeResolver, NSButton, AVTrimView, AVPlayerLayer;
@protocol AVTrimControlsViewControllerDelegate;

@interface AVTrimControlsViewController : AVPlayerControlsViewController <NSTouchBarDelegate, AVTrimViewDelegate> {
    NSView *_buttonsContainerView;
    AVTrimView *_trimView;
    NSCustomTouchBarItem *_trimControlsTouchBarItem;
    NSButton *_trimButton;
    NSButton *_touchBarTrimButton;
    NSButton *_touchBarRevertButton;
    AVTouchBarTrimControlsViewController *_touchBarTrimControlsViewController;
    AVPlayerControllerTimeResolver *_timeResolver;
    NSView *_initialFirstResponder;
    unsigned long long _trackedPart;
    id /* block */ _nextKeyViewSetupBlock;
}

@property (retain, nonatomic) AVPlayerLayer *thumbnailPlayerLayer;
@property (readonly) AVPlayerControllerTimeResolver *timeResolver;
@property double originalMinTime;
@property double originalMaxTime;
@property double selectionStart;
@property double selectionEnd;
@property (readonly) AVTrimView *trimView;
@property (weak) id<AVTrimControlsViewControllerDelegate> delegate;
@property double maximumSelectionDuration;
@property (readonly) unsigned long long preferredTrimViewStyle;
@property (readonly, getter=isTrimButtonEnabled) BOOL trimButtonEnabled;
@property BOOL includesTrimAndCancelButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingRevertButtonEnabled;
+ (id)keyPathsForValuesAffectingTrimButtonEnabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)cancel:(id)a0;
- (void)revert:(id)a0;
- (void)done:(id)a0;
- (id)initialFirstResponder;
- (void)keyDown:(id)a0;
- (void)loadView;
- (id)makeTouchBar;
- (void)viewDidLayout;
- (void)viewWillAppear;
- (void)setPlayerController:(id)a0;
- (void)_setUpThumbnailPlayerLayerIfNeeded;
- (void)_updateTimeResolverWithMinimumIntervalIfNeeded:(double)a0;
- (id)buttonsContainerView;
- (BOOL)isRevertButtonEnabled;
- (void)setupNextKeyView;
- (void)trim:(id)a0;
- (void)trimView:(id)a0 didChangeTimeIndicatorPopoverValue:(double)a1;
- (void)trimView:(id)a0 didStopTracking:(unsigned long long)a1;
- (void)trimView:(id)a0 didZoomBy:(double)a1;
- (float)trimView:(id)a0 minimumNudgeAmountInDirection:(long long)a1 forTrimPart:(unsigned long long)a2;
- (void)trimView:(id)a0 showTimeIndicatorPopoverWithValue:(double)a1;
- (void)trimView:(id)a0 willStartTracking:(unsigned long long)a1;
- (BOOL)trimViewCanStartTracking:(id)a0;
- (void)trimViewHideTimeIndicatorPopover:(id)a0;
- (void)updateTrimButtonState;

@end
