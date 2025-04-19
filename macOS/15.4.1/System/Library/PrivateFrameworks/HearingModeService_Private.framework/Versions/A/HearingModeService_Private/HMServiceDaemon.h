@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMServiceDaemon : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHMServiceDaemon;

- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activate;
- (void)_update;
- (void)_fetchOcclusionResultForDeviceIdentifier:(id)a0 featureID:(int)a1 completion:(id /* block */)a2;
- (void)_modifyDeviceConfig:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)_reportDeviceRecordChange:(id)a0;
- (void)_reportDeviceRecordLost:(id)a0;
- (void)_reportValidAudiograms:(id)a0 invalidAudiograms:(id)a1 error:(id)a2;
- (void)_triggerDiagnosticCheckForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_xpcConnectionInvalidated:(id)a0;
- (void)reportDeviceRecordChange:(id)a0;
- (void)reportDeviceRecordLost:(id)a0;
- (void)reportDiagnosticRecordChange:(id)a0;
- (void)reportValidAudiograms:(id)a0 invalidAudiograms:(id)a1 error:(id)a2;

@end
