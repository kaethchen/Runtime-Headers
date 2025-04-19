@protocol _CDContextPersisting;

@interface _CDPolicyBasedPersisting : NSObject <_CDContextPersisting>

@property (readonly, nonatomic) id<_CDContextPersisting> persistenceSurvivingReboot;
@property (readonly, nonatomic) id<_CDContextPersisting> persistenceSurvivingRelaunch;

+ (id)persistenceWithPersistenceSurvivingReboot:(id)a0 persistenceSurvivingRelaunch:(id)a1;

- (void).cxx_destruct;
- (void)deleteAllData;
- (void)deleteDataCreatedBefore:(id)a0;
- (void)deleteRegistration:(id)a0;
- (id)initWithPersistenceSurvivingReboot:(id)a0 persistenceSurvivingRelaunch:(id)a1;
- (id)loadRegistrations;
- (id)loadValues;
- (void)saveRegistration:(id)a0;
- (void)saveValue:(id)a0 forKeyPath:(id)a1;

@end
