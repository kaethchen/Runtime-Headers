@class NSTextField, UXBarButtonItem, UXView, NSLayoutConstraint, KHCalendarOptionsModel, NSPopUpButton, NSButton;

@interface KHCalendarProductChooserViewController : UXViewController {
    unsigned long long _viewDidAppearCalls;
}

@property (readonly, nonatomic) UXBarButtonItem *helpButtonItem;
@property (readonly, nonatomic) UXBarButtonItem *cancelButtonItem;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) KHCalendarOptionsModel *calendarOptionsModel;
@property (weak) NSTextField *productDescriptionLabel;
@property (weak) NSTextField *productSizeLabel;
@property (weak) NSTextField *primaryPriceLabel;
@property (weak) NSTextField *primaryPriceLabelInfo;
@property (weak) NSTextField *secondaryPriceLabel;
@property (weak) NSTextField *optionalShippingCostLabel;
@property (weak) NSPopUpButton *startingMonthPopupButton;
@property (weak) NSPopUpButton *startingYearPopupButton;
@property (weak) NSPopUpButton *numberOfMonthsPopupButton;
@property (weak) NSButton *continueButton;
@property (weak) NSButton *learnMoreButton;
@property (weak) UXView *imageView;
@property (weak) UXView *contentContainerView;
@property (weak) NSLayoutConstraint *topSpaceConstraintContinueButton;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelOperation:(id)a0;
- (void)showHelp:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (long long)projectType;
- (void)changeStoreNotificationReceived;
- (void)_showPricesLabel:(BOOL)a0 animated:(BOOL)a1;
- (void)createCalendarProject:(id)a0;
- (void)updatePricesInfo;

@end
