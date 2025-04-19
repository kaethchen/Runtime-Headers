@class NSString;

@interface ABCNDisplayStyleDescription : ABCNPropertyDescription <ABCNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)copyFromContact:(id)a0 to:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (id)displayStyleFromFlags:(id)a0;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (id)flagsWithFlags:(id)a0 displayStyle:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)setValue:(id)a0 onAddressBookPerson:(id)a1;
- (void)setValue:(id)a0 onCoreDataContact:(id)a1;
- (BOOL)shouldSkip;
- (id)valueFromAddressBookPerson:(id)a0;
- (id)valueFromCoreDataContact:(id)a0;

@end
