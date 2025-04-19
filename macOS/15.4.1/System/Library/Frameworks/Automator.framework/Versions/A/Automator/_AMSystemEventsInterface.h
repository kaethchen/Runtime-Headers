@class NSString;

@interface _AMSystemEventsInterface : SBObject <_AMSystemEventsGenericMethods>

@property BOOL automatic;
@property (copy) NSString *duplex;
@property (readonly, copy) NSString *kind;
@property (readonly, copy) NSString *MACAddress;
@property long long mtu;
@property (readonly, copy) NSString *name;
@property long long speed;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)id;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
