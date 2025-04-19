@class NSUserDefaults;

@interface BCSHousekeeper : NSObject <BCSHousekeeping>

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) long long currentVersion;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;
- (void)cleanupDataAtOldPathsIfNeeded;
- (id)initWithUserDefaults:(id)a0 currentVersion:(long long)a1;

@end
