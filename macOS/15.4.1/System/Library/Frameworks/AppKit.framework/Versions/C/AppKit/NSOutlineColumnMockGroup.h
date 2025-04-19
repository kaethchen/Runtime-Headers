@class NSTableColumn;

@interface NSOutlineColumnMockGroup : NSObject {
    long long _row;
    NSTableColumn *_tableColumn;
}

+ (id)outlineColumnGroupForRow:(long long)a0 column:(long long)a1 tableView:(id)a2;
+ (id)outlineColumnGroupForRow:(long long)a0 tableColumn:(id)a1;

- (void)dealloc;
- (long long)row;
- (long long)column;
- (id)accessibilityActionDescription:(id)a0;
- (id)_cellProxyForRow:(long long)a0 tableColumn:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_groupRect;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (long long)accessibilityColumnIndex;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsParentAttributeSettable;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityPositionAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilitySizeAttribute;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityWindowAttribute;
- (id)initWithRow:(long long)a0 column:(long long)a1 tableView:(id)a2;
- (id)initWithRow:(long long)a0 tableColumn:(id)a1;

@end
