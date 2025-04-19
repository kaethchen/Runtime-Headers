@class NSString;

@interface ABCNPostalAddressesDescription : ABCNPropertyDescription <ABCNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)address:(id)a0 winsTieBreakerAgainstAddressUsingStateNameCompleteness:(id)a1;
- (unsigned long long)indexOfUSState:(id)a0;
- (BOOL)isStateValue:(id)a0 equivalentToValue:(id)a1;
- (BOOL)address:(id)a0 winsTieBreakerAgainstAddress:(id)a1;
- (BOOL)address:(id)a0 winsTieBreakerAgainstAddressUsingPostalCodeCompleteness:(id)a1;
- (void)copyFromContact:(id)a0 to:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (BOOL)isPostalCodeValue:(id)a0 equivalentToValue:(id)a1;
- (BOOL)isValue:(id)a0 equivalentToValue:(id)a1;
- (BOOL)isValue:(id)a0 equivalentToValue:(id)a1 forKey:(id)a2;
- (BOOL)isValue:(id)a0 preferredToEquivalentValue:(id)a1;
- (BOOL)postalCodeIsMoreComplete:(id)a0;
- (unsigned long long)preferenceScoreForAddress:(id)a0;
- (unsigned long long)preferenceScoreForKey:(id)a0;

@end
