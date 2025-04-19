@class NSArray, NSInspectorBar;

@interface __NSInspectorBarView : NSStackView

@property (copy) NSArray *items;
@property NSInspectorBar *inspectorBar;

- (void)addItem:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityRoleAttribute;
- (BOOL)mouseDownCanMoveWindow;
- (void)removeItems;

@end
