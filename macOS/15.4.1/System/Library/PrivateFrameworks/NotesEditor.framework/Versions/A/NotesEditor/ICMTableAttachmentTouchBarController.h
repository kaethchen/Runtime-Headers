@class ICMNoteEditorController, NSCustomTouchBarItem, ICMacTableAttachmentViewController, NSString, ICMTextStyleTouchBarBIUButton;
@protocol ICMTableAttachmentTouchBarControllerDelegate;

@interface ICMTableAttachmentTouchBarController : ICMTextStylesTouchBarController <NSTouchBarDelegate>

@property (readonly, nonatomic) ICMNoteEditorController *editorController;
@property (retain, nonatomic) NSCustomTouchBarItem *biuBarItem;
@property (retain, nonatomic) ICMTextStyleTouchBarBIUButton *biuSegmentedControl;
@property (weak, nonatomic) id<ICMTableAttachmentTouchBarControllerDelegate> delegate;
@property (weak, nonatomic) ICMacTableAttachmentViewController *tableController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingEditorController;
+ (id)keyPathsForValuesAffectingWindowController;

- (id)init;
- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)customizationAllowedItemIdentifiers;
- (id)customizationIdentifier;
- (id)customizationRequiredItemIdentifiers;
- (id)defaultItemIdentifiers;
- (void)updateTextTouchBarItems;
- (id)windowController;
- (void)addNoteButtonPressed:(id)a0;
- (void)biuButtonPressed:(id)a0;
- (id)canIndentEnabledBindingObject;
- (id)canOutdentEnabledBindingObject;
- (id)canStyleTextEnabledBindingObject;
- (id)canToggleTodoEnabledBindingObject;
- (void)checklistButtonPressed:(id)a0;
- (id)dfrBIUEnabledBindingObject;
- (void)indentButtonPressed:(id)a0;
- (id)initWithTableController:(id)a0 touchBarDelegate:(id)a1;
- (void)outdentButtonPressed:(id)a0;
- (void)styleButtonPressed:(id)a0;

@end
