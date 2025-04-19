@class NSString;

@interface _AMAddressBookAddress : SBObject

@property (copy) NSString *city;
@property (readonly, copy) NSString *formattedAddress;
@property (copy) NSString *street;
@property (copy) NSString *zip;
@property (copy) NSString *country;
@property (copy) NSString *label;
@property (copy) NSString *countryCode;
@property (copy) NSString *state;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)id;
- (void)setId:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(id)a1;

@end
