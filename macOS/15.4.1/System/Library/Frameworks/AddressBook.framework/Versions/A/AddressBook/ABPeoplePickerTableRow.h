@class ABPeoplePickerSubrowGroupElement;

@interface ABPeoplePickerTableRow : NSTableRow {
    ABPeoplePickerSubrowGroupElement *_subrowGroup;
}

+ (id)tableRow:(long long)a0 ofTableView:(id)a1;

- (void).cxx_destruct;
- (id)_accessibilityChildrenInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHelpStringForChild:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilitySizeOfChild:(id)a0;
- (id)subrowGroup;

@end
