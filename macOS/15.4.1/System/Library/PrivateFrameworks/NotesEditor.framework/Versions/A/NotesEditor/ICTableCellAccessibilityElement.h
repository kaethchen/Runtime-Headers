@class NSString, NSUUID, ICTableAccessibilityController, NSAttributedString;

@interface ICTableCellAccessibilityElement : NSObject <NSAccessibilityElement>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRect;
@property (weak, nonatomic) ICTableAccessibilityController *tableAXController;
@property (readonly, nonatomic) NSUUID *rowID;
@property (readonly, nonatomic) NSUUID *columnID;
@property (readonly, nonatomic) unsigned long long rowIndex;
@property (readonly, nonatomic) unsigned long long columnIndex;
@property (readonly, nonatomic) NSAttributedString *attributedContentString;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameInScreenSpace;
@property (readonly, nonatomic) BOOL isEditing;

- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityChildren;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityColumnIndexRange;
- (id)accessibilityFocusedUIElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityParent;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowIndexRange;
- (id)accessibilityTitle;
- (BOOL)isAccessibilityElement;
- (id)initWithTableAccessibilityController:(id)a0 columnID:(id)a1 rowID:(id)a2;
- (id)parentTableElement;

@end
