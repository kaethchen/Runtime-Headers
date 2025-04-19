@class ACAccountStore, ACAccount;

@interface _KSiCloudDeviceListMonitor : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) long long majorVersForCloudKitSyncMacOS;
@property (nonatomic) long long minorVersForCloudKitSyncMacOS;
@property (nonatomic) long long minorSubversionForCloudKitSyncMacOS;
@property (nonatomic) long long majorVersForCloudKitSynciOS;
@property (nonatomic) long long minorVersForCloudKitSynciOS;

+ (id)iCloudDeviceListMonitor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canMigrateToCloudKit;
- (id)copyFromTransaction:(struct AOSTransactionC { } *)a0;
- (void)fetchCloudKitDevicesWithCompletionBlock:(id /* block */)a0;
- (void)fetchICloudDevicesWithCompletionBlock:(id /* block */)a0;
- (void)isAccountCompatibleForCloudKitSyncingWithCompletionBlock:(id /* block */)a0;
- (BOOL)isSWVersionCloudKitSyncCompatible:(id)a0;
- (void)queryMigrationState;
- (void)resetDataNoAccount;

@end
