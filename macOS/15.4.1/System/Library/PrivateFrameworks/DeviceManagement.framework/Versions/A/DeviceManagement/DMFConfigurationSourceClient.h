@class NSXPCListener, NSString, NSXPCConnection, CATOperationQueue, DMFReportingRequirements, DMFConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, DMFConfigurationSourceClientDelegate;

@interface DMFConfigurationSourceClient : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, DMFConfigurationSourceClientInterface> {
    DMFReportingRequirements *_reportingRequirements;
}

@property unsigned long long state;
@property (retain, nonatomic) DMFConnection *connection;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *incomingConnection;
@property (retain, nonatomic) NSObject *reportingRequirementsLock;
@property (copy, nonatomic) NSString *configurationSourceName;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) CATOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *registerConfigurationSource;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (weak, nonatomic) id<DMFConfigurationSourceClientDelegate> delegate;
@property (copy, nonatomic) DMFReportingRequirements *reportingRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (id)machService;
- (id)stateDescription;
- (void)registrationOperationDidFinish:(id)a0;
- (void)assetResolutionOperationDidFinish:(id)a0 completion:(id /* block */)a1;
- (void)configurationEngineRequestedAsset:(id)a0 completion:(id /* block */)a1;
- (void)configurationEventsDidChange:(id)a0 completion:(id /* block */)a1;
- (void)configurationStatusDidChange:(id)a0 completion:(id /* block */)a1;
- (void)enqueueOperationToReportEvents:(id)a0 completion:(id /* block */)a1;
- (void)enqueueOperationToReportStatusChange:(id)a0 completion:(id /* block */)a1;
- (void)enqueueOperationToResolveAsset:(id)a0 completion:(id /* block */)a1;
- (void)eventsReportingOperationDidFinish:(id)a0 completion:(id /* block */)a1;
- (id)initWithConnection:(id)a0 organizationIdentifier:(id)a1 displayName:(id)a2 localMachServiceName:(id)a3;
- (void)probe:(id /* block */)a0;
- (void)registerConfigurationSourceIfNeeded;
- (void)statusReportingOperationDidFinish:(id)a0 completion:(id /* block */)a1;

@end
