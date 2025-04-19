@interface NSLabelViewCell : NSActionCell {
    long long _selectedParts;
    long long _focusedPart;
}

@property (readonly) long long numParts;
@property long long diskLabelValues;
@property unsigned long long imagePosition;
@property BOOL allowsMultipleSelection;
@property long long focusedPart;
@property long long hoveredPart;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isHoveredPart:(long long)a0;
- (void)setFocusedPart:(long long)a0;
- (void)accessibilitySetFocus:(id)a0 forChild:(id)a1;
- (long long)diskLabelValues;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForLabel:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_commonInit;
- (id)_currentLabelName;
- (void)_deselectPart:(long long)a0;
- (void)_drawBackgroundForPartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isPressedOrHovered:(BOOL)a1;
- (void)_drawPart:(long long)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_handleMouseMovedForEvent:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (BOOL)_isSelectedPart:(long long)a0;
- (id)_labelAttributes;
- (id)_nameForLabelPart:(long long)a0;
- (long long)_partAtPoint:(struct CGPoint { double x0; double x1; })a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForPart:(long long)a0;
- (void)_selectPart:(long long)a0;
- (void)_valueChanged:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityDescriptionOfChild:(id)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHelpStringForChild:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsChildFocusable:(id)a0;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (BOOL)accessibilityIsVisibleChildrenAttributeSettable;
- (void)accessibilityPerformAction:(id)a0 forChild:(id)a1;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilitySizeOfChild:(id)a0;
- (id)accessibilityValueAttribute;
- (id)accessibilityVisibleChildrenAttribute;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (long long)focusedPart;
- (void)mouseEntered:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)mouseExited:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (long long)numParts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })part:(long long)a0 boundsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)performClick:(id)a0;
- (void)setDiskLabelValues:(long long)a0;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;

@end
