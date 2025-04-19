@class NSString, ABPeoplePickerSubrowGroupElement, NSDateFormatter, CNDateComponentsFormatter, ABAddressBook;

@interface ABPeoplePickerSubrowObject : NSObject {
    NSString *_displayValue;
    BOOL _multiSubrow;
    long long _rows;
    NSDateFormatter *_dateFormatter;
    CNDateComponentsFormatter *_dateComponentsFormatter;
    ABAddressBook *_addressBook;
}

@property (retain, nonatomic) NSString *recordIdentifier;
@property (retain, nonatomic) NSString *propertyIdentifier;
@property (retain, nonatomic) NSString *property;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) long long propertyType;
@property (nonatomic) BOOL drawsSpecialSelection;
@property (weak, nonatomic) ABPeoplePickerSubrowGroupElement *parent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)column;
- (id)dateFormatter;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (long long)rows;
- (void)_setupValueIvars;
- (long long)compareWithSubrowObject:(id)a0;
- (id)dateComponentsFormatter;
- (BOOL)equalsContentsOf:(id)a0;
- (id)formattedAddressFromAKPostalAddress:(id)a0;
- (id)formattedSocialProfileFromAKSocialProfile:(id)a0;
- (id)initWithValue:(id)a0 label:(id)a1 property:(id)a2 type:(long long)a3;

@end
