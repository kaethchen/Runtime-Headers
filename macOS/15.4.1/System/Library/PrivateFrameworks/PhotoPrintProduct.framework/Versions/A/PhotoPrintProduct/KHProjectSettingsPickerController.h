@class KHStackView, UXView, KHProjectLayoutsDataSource, NSButton;

@interface KHProjectSettingsPickerController : UXViewController

@property (retain) KHProjectLayoutsDataSource *dataSource;
@property (retain, nonatomic) NSButton *appleLogoButton;
@property (retain, nonatomic) NSButton *showPageNumbersButton;
@property (retain, nonatomic) NSButton *enableAutoLayoutButton;
@property (retain, nonatomic) UXView *separatorView;
@property (retain, nonatomic) KHStackView *stackView;
@property (retain, nonatomic) NSButton *changeThemeButton;
@property (retain, nonatomic) NSButton *changeProductButton;
@property BOOL allowsAppleLogoButton;
@property BOOL allowsPageNumberControl;
@property (nonatomic) BOOL allowsAutoLayoutButton;
@property (nonatomic) BOOL allowsChangeProductButton;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_setupViewHierarchy;
- (id)_setupSwitchButton;
- (void)enableAutoFillButtonPressed:(id)a0;
- (void)enableAutoLayoutAction:(id)a0;
- (id)initWithProjectDatasource:(id)a0;
- (void)showAppleLogoAction:(id)a0;
- (void)showPageNumbersAction:(id)a0;

@end
