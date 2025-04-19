@class NSDate;

@interface _AMAddressBookEntry : SBObject

@property (readonly, copy) NSDate *modificationDate;
@property (readonly, copy) NSDate *creationDate;
@property BOOL selected;

- (id)removeFrom:(id)a0;
- (void)delete;
- (void)moveTo:(id)a0;
- (id)id;
- (id)addTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(id)a1;

@end
