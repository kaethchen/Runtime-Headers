@class NSView, ContactsAutoFillChoicesMenuItemView;

@interface ContactsAutoFillChoicesPopUpButtonViewController : SafeAutoFillChoicesPopUpButtonViewController

@property (retain, nonatomic) NSView *popUpButtonContentView;
@property (retain, nonatomic) ContactsAutoFillChoicesMenuItemView *menuItemView;

- (void).cxx_destruct;
- (void)_addMenuItems;
- (void)_alignMenuItemsAndUpdateMenuWidthToFitMenuItems;
- (id)initWithArrayOfAutoFillDisplayData:(id)a0 initiallySelectedAutoFillData:(id)a1;

@end
