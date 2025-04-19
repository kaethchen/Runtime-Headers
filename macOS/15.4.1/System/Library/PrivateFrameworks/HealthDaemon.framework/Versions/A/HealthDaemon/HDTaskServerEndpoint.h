@class NSUUID, NSString, NSXPCListenerEndpoint, HDXPCListener, _TtC12HealthDaemon29HDHealthStoreClientAssertions, HDProfile, HKTaskConfiguration, HKHealthStoreConfiguration;
@protocol HDTaskServerDelegate, HDTaskServerEndpointDelegate, HDTaskServer;

@interface HDTaskServerEndpoint : NSObject <HDXPCListenerDelegate> {
    HDXPCListener *_listener;
}

@property (readonly, nonatomic) Class taskServerClass;
@property (readonly, copy, nonatomic) NSUUID *taskUUID;
@property (readonly, copy, nonatomic) NSUUID *instanceUUID;
@property (readonly, copy, nonatomic) HKTaskConfiguration *taskConfiguration;
@property (readonly, copy, nonatomic) HKHealthStoreConfiguration *healthStoreConfiguration;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, weak, nonatomic) _TtC12HealthDaemon29HDHealthStoreClientAssertions *databaseAccessibilityAssertions;
@property (readonly, weak, nonatomic) id<HDTaskServer> taskServer;
@property (weak, nonatomic) id<HDTaskServerEndpointDelegate> delegate;
@property (weak, nonatomic) id<HDTaskServerDelegate> taskServerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)connectionConfiguredForListener:(id)a0 client:(id)a1 exportedObject:(id)a2;
- (void)connectionInvalidatedForListener:(id)a0 client:(id)a1 exportedObject:(id)a2;
- (id)exportObjectForListener:(id)a0 client:(id)a1 error:(id *)a2;
- (id)initWithTaskServerClass:(Class)a0 taskConfiguration:(id)a1 healthStoreConfiguration:(id)a2 taskUUID:(id)a3 instanceUUID:(id)a4 profile:(id)a5 databaseAccessibilityAssertions:(id)a6 connectionQueue:(id)a7;

@end
