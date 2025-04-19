@class NSTextField, NSArray, NSView, SafeAutoFillChoicesMenuItemView, SafeAutoFillChoicesPopUpButton, AutoFillDisplayData, NSString;
@protocol SafeAutoFillChoicesPopUpButtonViewControllerDelegate;

@interface SafeAutoFillChoicesPopUpButtonViewController : NSViewController

@property (retain, nonatomic) NSView *popUpButtonContentView;
@property (retain, nonatomic) SafeAutoFillChoicesMenuItemView *menuItemView;
@property (weak, nonatomic) id<SafeAutoFillChoicesPopUpButtonViewControllerDelegate> delegate;
@property (weak, nonatomic) NSTextField *sectionTitleLabel;
@property (weak, nonatomic) NSTextField *contentValueLabel;
@property (readonly, nonatomic) SafeAutoFillChoicesPopUpButton *popUpButton;
@property (readonly, copy, nonatomic) NSArray *arrayOfAutoFillDisplayData;
@property (retain, nonatomic) AutoFillDisplayData *selectedDisplayData;
@property (nonatomic) double maximumContentValueLabelWidth;
@property (nonatomic) double maximumSectionTitleLabelWidth;
@property (readonly, copy, nonatomic) NSString *menuItemViewNibFileName;

- (void).cxx_destruct;
- (void)_addMenuItems;
- (void)viewDidLoad;
- (void)_addMenuItemToMenu:(id)a0 forDisplayData:(id)a1;
- (void)_alignMenuItemsAndUpdateMenuWidthToFitMenuItems;
- (void)_didSelectMenuItem:(id)a0;
- (void)_enumerateThroughMenuItemsWithBlock:(id /* block */)a0;
- (void)_selectMenuItemCorrespondingToSelectedDisplayData;
- (void)_updateButtonLabels;
- (id)initWithArrayOfAutoFillDisplayData:(id)a0 initiallySelectedAutoFillData:(id)a1 menuItemViewNibFileName:(id)a2 popUpButtonNibFileName:(id)a3;

@end
