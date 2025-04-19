@class NSString, NSArray, CDMComposerService, CDMServiceGraphRunner, NSMutableDictionary, CDMDynamicConfig, NSObject, CDMConfig;
@protocol OS_dispatch_queue, OS_os_transaction, OS_dispatch_source;

@interface CDMServiceCenter : NSObject <CDMServiceObserver> {
    CDMConfig *_config;
    NSArray *_services;
    NSArray *_dagServices;
    NSArray *_enabledDAGServiceNames;
    CDMComposerService *_composerService;
    NSMutableDictionary *_commandServicesDict;
    id /* block */ _defaultCallback;
    CDMServiceGraphRunner *_serviceGraphRunner;
    NSObject<OS_dispatch_queue> *_cdmServiceCenterQueue;
    CDMDynamicConfig *_currentConfig;
    NSObject<OS_os_transaction> *transaction;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
}

@property (readonly, nonatomic) long long systemState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDynamicConfigWithAssetCollectionForGraph:(id)a0 withLocale:(id)a1 withError:(id *)a2 withSelfMetadata:(id)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (void)initWithConfig:(id)a0;
- (id)getServices;
- (id)getCurrentConfig;
- (void)setSystemState:(long long)a0;
- (void)setupEmbeddingConfigsWithError:(id *)a0;
- (BOOL)areAssetsAvailable:(id)a0;
- (id)extractEnabledServiceNames:(id)a0;
- (id)getAssetPaths;
- (id)getEnabledDAGServiceNames;
- (id)getEnabledDAGServiceNamesForGraph:(id)a0;
- (id)getServicesToWarmup:(id)a0;
- (long long)getSystemState;
- (void)handleCommand:(id)a0 forCallback:(id /* block */)a1;
- (void)handleSetup:(id)a0 forCallback:(id /* block */)a1;
- (void)handleWarmup:(id)a0 forCallback:(id /* block */)a1;
- (BOOL)handleXPCActivity:(id)a0 fromIdentifier:(id)a1 withRegister:(id)a2;
- (BOOL)handleXPCEvent:(id)a0 fromStream:(id)a1 withRegister:(id)a2;
- (BOOL)isServiceNotReady:(id)a0 withServiceStateMap:(id)a1;
- (void)mergeConfig:(id)a0;
- (void)setupAssetsForCDMAssetsInfo:(id)a0 withError:(id *)a1;
- (void)setupAssetsForCDMAssetsInfo:(id)a0 withError:(id *)a1 andSelfMetadata:(id)a2 dataDispatcherContext:(id)a3;
- (void)setupCDMAssetManagerWithError:(id *)a0;
- (void)smService:(id)a0 didPublishCommand:(id)a1;
- (void)smService:(id)a0 didPublishRequest:(id)a1 withResponseCallback:(id /* block */)a2;

@end
