@class NSString, UXView, PXLemonadeFeatureAvailabilityMonitor;

@interface PXFooterViewModel : PXObservable

@property (nonatomic, readonly) PXLemonadeFeatureAvailabilityMonitor *featureAvailabilityMonitor;
@property (readonly, nonatomic) long long animatedIconMode;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UXView *filterView;
@property (readonly, nonatomic) NSString *extendedTitle;
@property (readonly, nonatomic) NSString *extendedSystemImageName;
@property (readonly, nonatomic) NSString *subtitle1;
@property (readonly, nonatomic) NSString *subtitle2;
@property (readonly, nonatomic) NSString *internalMessageSubtitle;
@property (readonly, nonatomic) BOOL isPaused;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) long long actionStyle;
@property (readonly, nonatomic) NSString *actionTitle;
@property (readonly, nonatomic) NSString *actionConfirmationAlertTitle;
@property (readonly, nonatomic) NSString *actionConfirmationAlertSubtitle;
@property (readonly, nonatomic) NSString *actionConfirmationAlertButtonTitle;
@property (readonly, copy, nonatomic) id /* block */ action;
@property (readonly, nonatomic) UXView *accessoryView;
@property (readonly, nonatomic) UXView *topAccessoryView;
@property (readonly, nonatomic) BOOL hasImportantInformation;
@property (readonly, nonatomic) BOOL useBlankActionSeparator;
@property (readonly, nonatomic) long long subtitle1Style;
@property (readonly, nonatomic) BOOL isProcessing;
@property (readonly, nonatomic) BOOL showBadge;

- (id)init;
- (void).cxx_destruct;
- (void)setAccessoryView:(id)a0;
- (void)setAction:(id /* block */)a0;
- (void)setTitle:(id)a0;
- (void)setProgress:(float)a0;
- (void)setActionTitle:(id)a0;
- (void)setSubtitle2:(id)a0;
- (void)setIsPaused:(BOOL)a0;
- (void)setFilterView:(id)a0;
- (void)setTopAccessoryView:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setSubtitle1:(id)a0;
- (id)mutableChangeObject;
- (void)configureWithPhotosEnvironment:(id)a0;
- (void)footerAnimationCrossedGridCycleBoundary;
- (void)setActionConfirmationAlertButtonTitle:(id)a0;
- (void)setActionConfirmationAlertSubtitle:(id)a0;
- (void)setActionConfirmationAlertTitle:(id)a0;
- (void)setAnimatedIconMode:(long long)a0;
- (void)setExtendedSystemImageName:(id)a0;
- (void)setExtendedTitle:(id)a0;
- (void)setHasImportantInformation:(BOOL)a0;
- (void)setInternalMessageSubtitle:(id)a0;
- (void)setIsProcessing:(BOOL)a0;
- (void)setShowBadge:(BOOL)a0;
- (void)setSubtitle1Style:(long long)a0;
- (void)setUseBlankActionSeparator:(BOOL)a0;

@end
