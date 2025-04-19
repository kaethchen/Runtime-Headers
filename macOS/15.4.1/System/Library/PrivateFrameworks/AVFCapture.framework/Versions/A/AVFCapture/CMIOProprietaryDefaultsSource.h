@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CMIOProprietaryDefaultsSource : NSObject {
    id /* block */ _defaultChangedHandler;
    id /* block */ _frameSenderEndpointsChangedHandler;
    id /* block */ _connectionBrokenHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_registerExtensionServiceConnection;
    BOOL _connectionIsValid;
}

- (void)dealloc;
- (id)objectForKey:(id)a0;
- (int)setObject:(id)a0 forKey:(id)a1;
- (int)getCameraHistoryDownplayOverrideList:(id *)a0;
- (int)getCamerasIneligibleToParticpateInOverridingList:(id *)a0;
- (struct __CVBuffer { } *)imageForKey:(id)a0 fillWidth:(int)a1 fillHeight:(int)a2;
- (id)initWithDefaultChangedHandler:(id /* block */)a0 frameSenderEndpointsChangedHandler:(id /* block */)a1 connectionBrokenHandler:(id /* block */)a2;
- (id)objectsForWildcardKey:(id)a0;
- (int)observeChangesForKey:(id)a0;
- (int)proprietaryDefaultsDomainForAuditToken:(struct { unsigned int x0[8]; })a0 outProprietaryDefaultsDomain:(id *)a1;
- (id)setObject:(id)a0 forWildcardKey:(id)a1;
- (int)setObserveFrameSenderServerEndpoints:(BOOL)a0;
- (int)unobserveChangesForKey:(id)a0;
- (int)updateCameraHistory:(id)a0 withCameraInfo:(id)a1 maxLength:(unsigned long long)a2 updateCameraHistoryDownplayOverrideList:(BOOL)a3 cameraCanBeInOverrideList:(BOOL)a4 outNewCameraHistory:(id *)a5;
- (int)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setEligibility:(BOOL)a2 outOverrideHistoryChanged:(BOOL *)a3 outNewCameraOverrideHistory:(id *)a4;
- (int)updateCameraOverrideHistory:(id)a0 withCameraInfo:(id)a1 setOverride:(BOOL)a2 outOverrideChanged:(BOOL *)a3 outNewCameraOverrideHistory:(id *)a4;

@end
