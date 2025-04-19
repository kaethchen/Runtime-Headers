@class NSSet, GTServiceProperties, NSMutableDictionary, GTServiceConnection, NSObject;
@protocol OS_os_log;

@interface GTMTLCaptureServiceXPCProxy : NSObject <GTMTLCaptureService> {
    NSObject<OS_os_log> *_log;
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSMutableDictionary *_observerIdToPort;
}

@property (readonly, retain, nonatomic) GTServiceProperties *serviceProperties;

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)stop;
- (id)update:(id)a0;
- (void)abort;
- (unsigned long long)registerObserver:(id)a0;
- (unsigned long long)nextRequestID;
- (id)query:(id)a0;
- (id)createCaptureDescriptor;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (id)startWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;

@end
