@interface CNFromABCDConversions : NSObject

+ (id)contactFromABCDContact:(id)a0 keysToConvert:(id)a1;
+ (id /* block */)contactFromABCDContactWithKeysToFetch:(id)a0;
+ (id)groupFromABCDGroup:(id)a0;
+ (id /* block */)groupFromABCDGroupTransform;
+ (id)makeMutableContactWithIdentifierString:(id)a0 availableKeys:(id)a1;
+ (void)updateContact:(id)a0 fromABCDContact:(id)a1 withPropertyKeyDescriptor:(id)a2;

@end
