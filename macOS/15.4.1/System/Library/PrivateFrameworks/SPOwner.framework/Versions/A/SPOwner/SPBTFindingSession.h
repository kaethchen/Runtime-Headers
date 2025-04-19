@class NSUUID, NSString, FMXPCSession, FMXPCServiceDescription, NSObject, SPBTFindingSessionConfig;
@protocol OS_dispatch_queue, SPBTFindingXPCProtocol;

@interface SPBTFindingSession : NSObject <SPBTFindingXPCClientProtocol>

@property (copy, nonatomic) NSUUID *beacon;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPBTFindingXPCProtocol> proxy;
@property (readonly, copy, nonatomic) SPBTFindingSessionConfig *config;
@property (copy, nonatomic) id /* block */ sessionInvalidatedCallback;
@property (copy, nonatomic) id /* block */ didUpdateBTRSSIMeasurementCallback;
@property (copy, nonatomic) id /* block */ didUpdateBTRSSIResultCallback;
@property (copy, nonatomic) id /* block */ findingSessionErrorCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)invalidationHandler:(id)a0;
- (void)findingSessionError:(id)a0;
- (void)interruptionHandler:(id)a0;
- (void)startFastAdvertisingForBeacon:(id)a0 completion:(id /* block */)a1;
- (void)startFindingBeacon:(id)a0 completion:(id /* block */)a1;
- (void)stopFastAdvertisingForBeacon:(id)a0 completion:(id /* block */)a1;
- (void)stopFindingBeacon:(id)a0 completion:(id /* block */)a1;
- (void)updateConfig:(id)a0;
- (void)updatedBTRSSIMeasurement:(id)a0;
- (void)updatedBTRSSIResult:(id)a0;

@end
