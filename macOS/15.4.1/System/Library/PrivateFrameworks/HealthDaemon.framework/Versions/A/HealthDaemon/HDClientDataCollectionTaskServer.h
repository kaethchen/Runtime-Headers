@class NSUUID, NSString, HKDevice, NSError, HKDataCollectorTaskServerConfiguration, HKDataCollectorState, HDDataAggregator, NSMutableDictionary, NSObject, HKSource, HKDataCollectorCollectionConfiguration;
@protocol OS_dispatch_queue;

@interface HDClientDataCollectionTaskServer : HDStandardTaskServer <HKDataCollectorTaskServerInterface, HDDataCollector> {
    NSObject<OS_dispatch_queue> *_queue;
    HKDataCollectorState *_dataCollectorState;
    HKDevice *_device;
    NSError *_fatalError;
    HKDataCollectorTaskServerConfiguration *_configuration;
    NSUUID *_registrationUUID;
    HDDataAggregator *_aggregator;
    HKDataCollectorCollectionConfiguration *_collectionConfiguration;
    NSMutableDictionary *_lastDatumByDevice;
    HKSource *_clientSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)connectionConfigured;
- (void)remote_insertDatums:(id)a0 device:(id)a1 metadata:(id)a2 options:(unsigned long long)a3 batchUUID:(id)a4 registrationUUID:(id)a5 completion:(id /* block */)a6;
- (void)remote_registerWithCompletion:(id /* block */)a0;
- (void)remote_setCollectionState:(id)a0 completion:(id /* block */)a1;
- (void)remote_synchronizeWithCompletion:(id /* block */)a0;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (void)dataAggregator:(id)a0 didPersistDatums:(id)a1 success:(BOOL)a2 error:(id)a3;
- (void)dataAggregator:(id)a0 requestsCollectionThroughDate:(id)a1 completion:(id /* block */)a2;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (id)identifierForDataAggregator:(id)a0;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (Class)sensorDatumClassForAggregator:(id)a0;
- (id)sourceForDataAggregator:(id)a0;

@end
