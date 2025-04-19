@interface IOBluetoothCloudServerClient : NSObject

+ (void)getSignInStatus;
+ (void)checkManateeAccountSupport;
+ (void)deleteAccessoryZone;
+ (void)deleteManateeAccessoryZone;
+ (void)deleteOldContainer;
+ (void)fetchAccessoryKeyBlob;
+ (void)fetchHSA2Key;
+ (void)fetchKeyBlob;
+ (void)iCloudPairing;
+ (void)keyDict:(id)a0;
+ (void)keymismatch:(id)a0;
+ (void)readNewContainer;
+ (void)readOldContainer;
+ (void)sendCloudpairingRetry:(id)a0;
+ (void)updateAccessoryBlob:(id)a0;
+ (void)updateCloudPairedList;
+ (void)updateKeyBlob:(id)a0;
+ (void)upgradeToManatee:(id)a0 accessoryKey:(id)a1;
+ (void)uploadHSA2Key:(id)a0;

@end
