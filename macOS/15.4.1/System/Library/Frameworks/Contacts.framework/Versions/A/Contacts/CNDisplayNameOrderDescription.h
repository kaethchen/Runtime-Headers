@class NSString;

@interface CNDisplayNameOrderDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (Class)valueClass;
- (id)coreDataKey;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)flagsWithFlags:(id)a0 nameOrder:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)nameOrderFromFlags:(id)a0;
- (void)setValue:(id)a0 onCoreDataContact:(id)a1;
- (id)valueFromCoreDataContact:(id)a0;
- (id)CNValueForContact:(id)a0;
- (long long)coreDataBitMask;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (id)coreDataBitMaskedValuesMap;
- (BOOL)isValidValue:(id)a0 error:(id *)a1;
- (id)nilValue;
- (void)setCNValue:(id)a0 onContact:(id)a1;

@end
