@class NSImageView, NSTextField, NSLayoutConstraint, NSObject;
@protocol AMPVideoPrerollModel;

@interface AMPVideoPrerollLockup : AMPBindableView

@property (weak, nonatomic) NSTextField *titleLabel;
@property (weak, nonatomic) NSImageView *logoImage;
@property (retain, nonatomic) NSLayoutConstraint *logoAspectConstraint;
@property (retain, nonatomic) NSLayoutConstraint *minWidthConstraint;
@property (retain, nonatomic) NSObject<AMPVideoPrerollModel> *viewModel;
@property (nonatomic) BOOL hideSmallModeData;
@property (copy, nonatomic) id /* block */ backgroundClickedAction;

+ (void)fetchLogoImageWithURLTemplate:(id)a0 atSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
+ (id)keyPathsForValuesAffectingAddButtonImage;
+ (id)keyPathsForValuesAffectingShouldHideAddButton;
+ (id)keyPathsForValuesAffectingShouldHideExtraData;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)mouseUp:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldHideAddButton;
- (id)addButtonImage;
- (void)commonSetup;
- (void)displayLogoImage:(id)a0;
- (struct CGSize { double x0; double x1; })logoLoadingRequestSize;
- (void)potentiallyLoadLogoImage;
- (id)propertyKeysForViewSpy;
- (void)reflectAddButton:(id)a0;
- (void)reflectSkipButton:(id)a0;
- (BOOL)shouldHideExtraData;
- (BOOL)showOnlineContent;

@end
