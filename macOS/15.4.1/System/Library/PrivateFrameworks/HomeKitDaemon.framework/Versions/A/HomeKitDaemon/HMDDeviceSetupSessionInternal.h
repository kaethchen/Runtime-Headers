@class HMDHomeManager, NSDictionary, NSData, NSUserDefaults;

@interface HMDDeviceSetupSessionInternal : HMFObject

@property (nonatomic) unsigned long long state;
@property (readonly, weak) HMDHomeManager *homeManager;
@property (retain, nonatomic) NSData *sessionData;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;

+ (id)allowedClasses;
+ (long long)role;
+ (BOOL)isSupported;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0 userDefaults:(id)a1;
- (BOOL)processSessionData:(id)a0 outAccessoryUUID:(id *)a1 outAccessoryCategory:(id *)a2 outAccessoryIDSIdentifier:(id *)a3 error:(id *)a4;

@end
