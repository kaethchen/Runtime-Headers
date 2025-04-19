@class ICTableAccessibilityController, NSString, NSAccessibilityElement;

@interface ICMTableAccessibilityElement : NSAccessibilityElement <NSAccessibilityTable>

@property (weak, nonatomic) id parent;
@property (retain, nonatomic) NSAccessibilityElement *columnHeaderContainerElement;
@property (retain, nonatomic) NSAccessibilityElement *rowHeaderContainerElement;
@property (weak, nonatomic) ICTableAccessibilityController *tableAXController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityCellForColumn:(long long)a0 row:(long long)a1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildren;
- (long long)accessibilityColumnCount;
- (id)accessibilityColumnHeaderUIElements;
- (id)accessibilityColumns;
- (id)accessibilityFocusedUIElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (id)accessibilityRole;
- (long long)accessibilityRowCount;
- (id)accessibilityRowHeaderUIElements;
- (id)accessibilityRows;
- (id)accessibilitySelectedCells;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilitySelectedCells:(id)a0;
- (id)initWithTableAccessibilityController:(id)a0 parent:(id)a1;

@end
