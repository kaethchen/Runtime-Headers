@class NSView, NSString, SGUISuggestedEventDayViewAppearanceDelegate, NSStackView, SGRealtimeEvent, NSLayoutConstraint, EKEventViewController, CalUIDayViewGadgetController;
@protocol SuggestedEventPopoverControllerDelegate;

@interface SGUISuggestedEventPopoverViewController : NSViewController <EKViewWindowController>

@property (readonly, nonatomic) EKEventViewController *eventViewController;
@property (readonly, nonatomic) CalUIDayViewGadgetController *dayViewGadgedController;
@property (readonly, nonatomic) EKEventViewController *detailedViewController;
@property (readonly, nonatomic) SGUISuggestedEventDayViewAppearanceDelegate *dayViewAppearanceDelegate;
@property (weak, nonatomic) NSStackView *summaryStackView;
@property (weak, nonatomic) NSView *divider;
@property (weak, nonatomic) NSView *eventClipView;
@property (weak, nonatomic) NSView *summaryNavigationView;
@property (weak, nonatomic) NSView *detailNavigationView;
@property (retain, nonatomic) NSView *detailsContainer;
@property (weak, nonatomic) NSView *detailsDivider;
@property (retain, nonatomic) NSLayoutConstraint *stackWidthInitialConstraint;
@property (weak, nonatomic) NSStackView *detailsStackView;
@property (nonatomic) BOOL showingDetails;
@property (nonatomic) BOOL isNewEvent;
@property (readonly, nonatomic) BOOL isActionable;
@property (retain, nonatomic) NSString *ignoreTitle;
@property (readonly, nonatomic) NSLayoutConstraint *detailsWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *eventHeaderHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackWidthFixedConstraint;
@property (retain) SGRealtimeEvent *representedObject;
@property (weak, nonatomic) id<SuggestedEventPopoverControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_eventStore;
+ (double)_detailsAnimationDuration;
+ (id)eventKitEventForRealtimeEvent:(id)a0;
+ (id)keyPathsForValuesAffectingIgnoreTitle;
+ (id)keyPathsForValuesAffectingIsActionable;

- (void).cxx_destruct;
- (void)dismissController:(id)a0;
- (id)nibBundle;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)commitEvent:(id)a0;
- (void)didCommitItem;
- (void)didSaveItem;
- (id)_detailedViewControllerSettings;
- (void)_updateNavigationViewVisability;
- (void)_cleanupEventViewController;
- (void)_collapseDetails;
- (id)_eventViewControllerSettings;
- (void)_expandDetails;
- (void)_updateDayViewGadgetEvent;
- (void)ignoreEvent:(id)a0;
- (void)toggleShowDetails:(id)a0;

@end
