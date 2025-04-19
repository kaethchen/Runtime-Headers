@interface _NSThemeCloseWidgetCell : _NSThemeWidgetCell {
    BOOL _edited;
}

- (id)accessibilityAttributeNames;
- (id)accessibilityEditedAttribute;
- (BOOL)accessibilityIsEditedAttributeSettable;
- (id)coreUIValue;
- (int)getState:(id)a0;
- (BOOL)isEdited;
- (BOOL)setEditedFlag:(BOOL)a0;

@end
