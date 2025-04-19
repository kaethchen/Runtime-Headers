@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface APLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (retain) NSObject<OS_os_log> *backingOSLogObject;
@property (retain) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy) NSString *category;
@property (copy) NSString *subsystem;
@property (readonly) NSObject<OS_os_log> *OSLogObject;

+ (id)sharedConfig;
+ (id)_createLogConfigWithBaseConfig:(id)a0 subystem:(id)a1 category:(id)a2;
+ (id)_createLogConfigWithSubsystem:(id)a0 category:(id)a1;
+ (id)sharedDaemonConfig;
+ (id)sharedExtensionConfig;
+ (id)sharedFrameworkConfig;
+ (id)sharedPluginConfig;
+ (id)sharedSettingsConfig;
+ (id)sharedUIServiceConfig;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
