@interface ABCNFromABInternalConversions : NSObject

+ (void)addValueWithIdentifier:(id)a0 transform:(id /* block */)a1 fromABMultiValue:(id)a2 toMultiValue:(id)a3;
+ (id)abcnGroupFromABCDGroup:(id)a0;
+ (id)contactFromABCDContact:(id)a0;
+ (id)multiValueFromABMultiValue:(id)a0 transform:(id /* block */)a1;
+ (id)mutableContactWithIdentifierString:(id)a0;
+ (void)updateAllPropertiesOnContact:(id)a0 fromABCDContact:(id)a1;
+ (id)valueForProperty:(id)a0 fromABCDContact:(id)a1;

@end
