@interface ABCardViewLinkedPeopleProperty : ABCardViewProperty

+ (id)localizedLabel;
+ (id /* block */)linkedContactsComparatorWithMapper:(id)a0;

- (id)nameForContact:(id)a0;
- (BOOL)allowsCustomLabels;
- (id)emptyValueForMultiValue:(id)a0 label:(id)a1;
- (BOOL)isValueEmpty:(id)a0;
- (id)multiValueFromLinkedContacts:(id)a0 personMapper:(id)a1;
- (id)multiValueWithPersonMapper:(id)a0;
- (BOOL)shouldReloadViewOnUserEdit;
- (BOOL)shouldShowNamesForContacts:(id)a0;

@end
