@class NSString;

@interface _AMAddressBookContactInfo : SBObject

@property (copy) NSString *label;
@property (copy) id value;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)id;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(id)a1;

@end
