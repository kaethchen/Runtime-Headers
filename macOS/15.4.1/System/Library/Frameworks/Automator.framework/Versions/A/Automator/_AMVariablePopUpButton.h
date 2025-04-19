@class NSString, _AMVariableActionTarget;

@interface _AMVariablePopUpButton : NSPopUpButton

@property (nonatomic) BOOL isMenuVisible;
@property (retain, nonatomic) _AMVariableActionTarget *_actionTarget;
@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic) NSString *observedParameterKey;

+ (void)initialize;
+ (Class)cellClass;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)addItemWithTitle:(id)a0;
- (void)removeAllItems;
- (void)addItemsWithTitles:(id)a0;
- (void)awakeFromNib;
- (void)concludeDragOperation:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)insertItemWithTitle:(id)a0 atIndex:(long long)a1;
- (void)mouseDown:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)removeItemAtIndex:(long long)a0;
- (void)removeItemWithTitle:(id)a0;
- (void)selectItem:(id)a0;
- (void)selectItemAtIndex:(long long)a0;
- (BOOL)selectItemWithTag:(long long)a0;
- (void)selectItemWithTitle:(id)a0;
- (void)setMenu:(id)a0;
- (void)_removeAllItems;
- (void)addVariable:(id)a0;
- (void)AMWorkflowDidAddVariable:(id)a0;
- (void)selectVariableMenuItemWithUUID:(id)a0;
- (void)AMVariableInWorkflowDidChange:(id)a0;
- (void)AMWorkflowDidRemoveVariable:(id)a0;
- (void)_addItemWithTitle:(id)a0;
- (void)_addItemsWithTitles:(id)a0;
- (BOOL)_allowDrag:(id)a0;
- (id)_attributedTitleForVariableUUID:(id)a0;
- (void)_insertItemWithTitle:(id)a0 atIndex:(long long)a1;
- (void)_removeItemAtIndex:(long long)a0;
- (void)_removeItemWithTitle:(id)a0;
- (void)_updateVariablesInMenuWithVariableUUID:(id)a0;
- (void)addNewVariableMenuItem;
- (void)createVariablesSection;
- (id)defaultNewVariable;
- (id)itemArrayWithTag:(long long)a0;
- (void)makeNewVariable:(id)a0;
- (id)parameterKeyDictionary;
- (void)popUpButtonWillPopUp:(id)a0;
- (void)removeAllItemsWithTag:(long long)a0;
- (void)removeVariableWithUUID:(id)a0;
- (void)selectMenuItemWithRepresentedObject:(id)a0;
- (id)selectedVariableUUID;
- (id)submenuForVariable:(id)a0;
- (BOOL)updateParameterWithMenuItem:(id)a0;
- (void)updateParameterWithValue:(id)a0;
- (void)useVariableMenuItem:(id)a0;
- (id)variableUUIDsInMenu;
- (id)variablesToAddToMenu;

@end
