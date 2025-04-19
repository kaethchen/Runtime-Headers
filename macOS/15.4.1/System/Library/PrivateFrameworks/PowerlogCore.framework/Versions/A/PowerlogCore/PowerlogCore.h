@class PLCoreService, PPSCoreStorage, PLCoreStorage, PPSCollectionOperator, NSDate, NSObject, PLCoreAgent;
@protocol OS_os_transaction, OS_dispatch_source;

@interface PowerlogCore : NSObject {
    NSObject<OS_dispatch_source> *_fVMPressureSource;
}

@property (retain) NSObject<OS_os_transaction> *userRequestTransaction;
@property (readonly) NSDate *launchDate;
@property (readonly) PLCoreStorage *storage;
@property (readonly) PLCoreAgent *agents;
@property (readonly) PLCoreService *services;
@property (readonly) PPSCoreStorage *coreStorage;
@property (readonly) PPSCollectionOperator *collection;

+ (id)sharedCore;
+ (BOOL)isAudioAccessory;
+ (BOOL)isDebugEnabled;
+ (BOOL)shouldSetupCore;
+ (BOOL)allowRun;
+ (void)deprecateOldFullMode;
+ (void)setupCore;
+ (BOOL)sharedCoreStarted;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didRecieveMemoryPressureWarning;
- (void)setupForPreUnlockTelemetry;
- (void)startCore;
- (void)startCoreForTest;
- (void)stopCore;

@end
