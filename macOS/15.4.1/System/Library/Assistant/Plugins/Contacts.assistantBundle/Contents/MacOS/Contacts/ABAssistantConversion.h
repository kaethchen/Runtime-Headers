@interface ABAssistantConversion : NSObject

+ (id)newSAPeopleFromMergingABPeople:(id)a0;
+ (BOOL)_addABMultiValuesForProperty:(id)a0 fromSAPerson:(id)a1 toABPerson:(id)a2;
+ (id)SAPropertyForABProperty:(id)a0;
+ (void)_convertProperty:(id)a0 fromABPerson:(id)a1 toSAPerson:(id)a2;
+ (id)_convertToSAValuesForMultiValueProperty:(id)a0 fromABPerson:(id)a1;
+ (id)_convertToSAValuesForMultiValueProperty:(id)a0 fromABPerson:(id)a1 onlyUniqueLabels:(BOOL)a2 noEmptyLabels:(BOOL)a3;
+ (id)_convertToSAValuesForMultiValueProperty:(id)a0 fromABPerson:(id)a1 onlyUniqueLabels:(BOOL)a2 noEmptyLabels:(BOOL)a3 withFavoritesFromAddressBook:(id)a4 accountIdentifier:(id)a5;
+ (id)_convertToSAValuesForMultiValueProperty:(id)a0 fromABPerson:(id)a1 withFavoritesFromAddressBook:(id)a2 accountIdentifier:(id)a3;
+ (BOOL)_setABMultiValueForProperty:(id)a0 fromSAPerson:(id)a1 toABPerson:(id)a2;
+ (BOOL)addFieldsFromSAPerson:(id)a0 toABPerson:(id)a1;
+ (void)markMeCardsInSAPeople:(id)a0 fromAddressBook:(id)a1;
+ (void)mergeSAPerson:(id)a0 toSAPerson:(id)a1;
+ (id)newABAddressWithSALocation:(id)a0;
+ (id)newSAABPeopleFromMergingABPeople:(id)a0;
+ (id)newSAPeopleFromExternalABPeople:(id)a0;
+ (id)newSAPeopleFromMergingABPeople:(id)a0 withAccountIdentifier:(id)a1;
+ (id)newSAPeopleFromMergingABPeople:(id)a0 withAccountIdentifier:(id)a1 returnSAABPeople:(BOOL)a2;
+ (id)newSAPersonFromABPerson:(id)a0;
+ (id)newSAPersonFromABPerson:(id)a0 conversionType:(int)a1;
+ (id)newSAPersonFromABPerson:(id)a0 conversionType:(int)a1 withAccountIdentifier:(id)a2 withExternalIdentifier:(id)a3 forAddressBook:(id)a4 returnSAABPerson:(BOOL)a5;
+ (id)newSAPersonFromABPerson:(id)a0 withAccountIdentifier:(id)a1 forAddressBook:(id)a2;
+ (id)newSAPersonFromABPerson:(id)a0 withAccountIdentifier:(id)a1 withExternalIdentifier:(id)a2;
+ (id)newSAPersonFromDeletedRecordID:(id)a0 forAddressBook:(id)a1;
+ (id)phonemeDataKey;
+ (BOOL)setFieldsFromSAPerson:(id)a0 toABPerson:(id)a1;

@end
