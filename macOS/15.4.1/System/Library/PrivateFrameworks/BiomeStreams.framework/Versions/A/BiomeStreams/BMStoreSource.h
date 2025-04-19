@class BMStoreConfig, NSObject, NSMutableArray, BMAccessClient, BMComputeSourceClient, BMStreamDatastoreWriter;
@protocol OS_os_transaction;

@interface BMStoreSource : BMSource {
    BMStreamDatastoreWriter *_writer;
    BMStoreConfig *_config;
    Class _eventDataClass;
    BMAccessClient *_accessClient;
    BOOL _shouldSendMetrics;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_os_transaction> *_transaction;
    NSMutableArray *_pendingWrites;
    id _lockStateRegistration;
}

@property (readonly, nonatomic) BMComputeSourceClient *computeSource;
@property (nonatomic) BOOL outOfProcess;

+ (id)_processPendingWritesQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)sendEvent:(id)a0;
- (void)sendEvent:(id)a0 timestamp:(double)a1;
- (void)_processPendingWrites;
- (id)initWithIdentifier:(id)a0 storeConfig:(id)a1;
- (BOOL)_writeEvent:(id)a0 timestamp:(double)a1 signpostID:(unsigned long long)a2 notifyCompute:(BOOL)a3;
- (id)initWithIdentifier:(id)a0 storeConfig:(id)a1 accessClient:(id)a2;
- (id)initWithIdentifier:(id)a0 storeConfig:(id)a1 accessClient:(id)a2 eventDataClass:(Class)a3;

@end
