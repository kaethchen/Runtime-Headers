@class NSString;

@interface ICMTableRowAccessibilityElement : ICMTableCellGroupAccessibilityElement <NSAccessibilityRow>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHeader;
- (long long)accessibilityIndex;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (id)accessibilityRole;
- (id)accessibilitySubrole;
- (id)cellElements;

@end
