@class NSString, NSTableColumn;

@interface NSTableViewCellProxy : NSAccessibilityProxy <NSTableViewCellElement> {
    NSTableColumn *_tableColumn;
    long long _row;
    Class _alternateParentClass;
    id _realElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellForRow:(long long)a0 column:(long long)a1 tableView:(id)a2;
+ (id)cellForRow:(long long)a0 tableColumn:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (long long)row;
- (long long)column;
- (void)accessibilitySetValueAttribute:(id)a0;
- (void)_accessibilityPerformAction:(id)a0;
- (void)_accessibilityPerformAction:(id)a0 withValue:(id)a1;
- (void)_accessibilityPopUpButtonCellPressAction:(id)a0;
- (void)_accessibilityShowMenu:(id)a0;
- (void)_sendDataSourceSetObjectValue:(id)a0;
- (id)accessibilityBoundsForRangeAttributeForParameter:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (long long)accessibilityColumnIndex;
- (id)accessibilityCurrentEditor;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityPositionAttribute;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (id)accessibilitySizeAttribute;
- (struct CGPoint { double x0; double x1; })accessibilityWindowPointForShowMenu;
- (Class)alternateParentClass;
- (id)cellForProxy;
- (id)editor;
- (id)initWithRow:(long long)a0 column:(long long)a1 tableView:(id)a2;
- (id)initWithRow:(long long)a0 tableColumn:(id)a1;
- (BOOL)isBeingEdited;
- (id)realElement;
- (void)setAlternateParentClass:(Class)a0;
- (id)tableView;

@end
