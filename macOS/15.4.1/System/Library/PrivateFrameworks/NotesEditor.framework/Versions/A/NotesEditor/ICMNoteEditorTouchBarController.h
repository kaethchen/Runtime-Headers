@class NSString, ICMNoteEditorController;

@interface ICMNoteEditorTouchBarController : ICMTextStylesTouchBarController <NSTouchBarDelegate>

@property (weak, nonatomic) ICMNoteEditorController *editorController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)customizationAllowedItemIdentifiers;
- (id)customizationIdentifier;
- (id)customizationRequiredItemIdentifiers;
- (id)defaultItemIdentifiers;
- (void)addNoteButtonPressed:(id)a0;
- (id)canIndentEnabledBindingObject;
- (id)canOutdentEnabledBindingObject;
- (id)canStyleTextEnabledBindingObject;
- (id)canToggleTodoEnabledBindingObject;
- (void)checklistButtonPressed:(id)a0;
- (id)dfrBIUEnabledBindingObject;
- (void)indentButtonPressed:(id)a0;
- (id)initWithEditorController:(id)a0 touchBarDelegate:(id)a1;
- (void)outdentButtonPressed:(id)a0;
- (void)styleButtonPressed:(id)a0;

@end
