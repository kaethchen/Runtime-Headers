@class NSString, NSMutableSet, NSXPCConnection;

@interface SESSessionManager : NSObject <SESSessionManagerCallbackInterface>

@property (retain) NSMutableSet *sessions;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setMachServiceName:(id)a0;
+ (id)getVehicleReports:(id *)a0;
+ (id)pauseRangingForReaderIdentifier:(id)a0 durationInSec:(double)a1 withAppletIdentifier:(id)a2;
+ (id)requestAssertionForKeyID:(id)a0 withAppletID:(id)a1 withOptions:(id)a2 error:(id *)a3;
+ (id)resumeRangingForReaderIdentifier:(id)a0 withAppletIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)connect;
- (void)sessionEnded:(id)a0;
- (void)connectionDidInterrupt;
- (void)connectionDidInvalidate;
- (id)startACWGSessionWithOptions:(id)a0 startCallback:(id /* block */)a1;
- (id)startAssertionForKeyIdentifier:(id)a0 withAppletIdentifier:(id)a1 withOptions:(id)a2 error:(id *)a3;
- (id)startDCKAssertionForKeyIdentifier:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (id)startDigitalCarKeySessionWithOptions:(id)a0 startCallback:(id /* block */)a1;
- (id)startRKESessionWithOptions:(id)a0 startCallback:(id /* block */)a1;

@end
