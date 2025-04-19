@class ACAccountStore;

@interface MFPersistenceMigratorV4 : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore;

- (id)init;
- (void).cxx_destruct;
- (void)migrate;
- (void)_moveAccountDirectories;
- (id)_upgradeLocalAccountOutbox;
- (void)_upgradeSyncedFilesInfo;

@end
