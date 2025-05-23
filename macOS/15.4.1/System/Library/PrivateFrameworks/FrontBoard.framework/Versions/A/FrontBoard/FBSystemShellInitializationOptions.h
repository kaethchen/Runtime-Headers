@class NSString;

@interface FBSystemShellInitializationOptions : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BOOL initializeReadyForInteraction;
@property (readonly, nonatomic) BOOL resetDarkBootState;
@property (readonly, nonatomic) BOOL shouldWaitForMigrator;
@property (readonly, nonatomic) double systemSleepInterval;
@property (readonly, copy, nonatomic) id /* block */ registerAdditionalServicesBlock;
@property (readonly, nonatomic) BOOL initializeDisplayManager;
@property (readonly, copy, nonatomic) NSString *independentWatchdogPortName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithOptions:(id)a0;

@end
