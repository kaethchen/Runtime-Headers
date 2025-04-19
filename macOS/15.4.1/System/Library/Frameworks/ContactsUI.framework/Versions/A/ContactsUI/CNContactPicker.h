@class NSArray, NSString, NSViewController, NSPopover;
@protocol CNContactPickerViewController, CNContactPickerDelegate, CNContactPickerInternalSetup;

@interface CNContactPicker : NSObject <NSPopoverDelegate, CNContactPickerInternalResponseDelegate> {
    BOOL _allowsNamePicking;
    NSPopover *_popover;
    NSViewController<CNContactPickerViewController, CNContactPickerInternalSetup> *_viewController;
}

@property (copy) NSArray *displayedKeys;
@property (weak) id<CNContactPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makePopoverWithDelegate:(id)a0 contentViewController:(id)a1;
+ (id)makeViewController;
+ (id)publicToCompatibilityKeyMap;
+ (BOOL)shouldUseInProcessPicker;
+ (id)supportedKeysToDisplay;
+ (id)swapKeysAndValuesOfDictionary:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (void)setAppearance:(id)a0;
- (void)showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;
- (void)addSection:(id)a0;
- (id)privateDelegate;
- (BOOL)delegateExpectesCompatiblityContact;
- (void)didSearchForString:(id)a0;
- (void)didSelectContact:(id)a0 key:(id)a1 value:(id)a2 identifier:(id)a3;
- (void)didShowSectionWithIdentifier:(id)a0;
- (void)registerSectionsForDraggedTypes:(id)a0;
- (void)selectSectionWithIdentifier:(id)a0;
- (void)setAllowsNamePicking:(BOOL)a0;
- (void)setSearchFieldVisible:(BOOL)a0;

@end
