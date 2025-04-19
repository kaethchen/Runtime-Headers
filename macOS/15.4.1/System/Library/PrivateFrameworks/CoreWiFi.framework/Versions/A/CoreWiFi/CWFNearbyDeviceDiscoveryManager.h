@class NSString, CWFNearbyDeviceDiscoveryParameter, NSObject;
@protocol OS_dispatch_queue;

@interface CWFNearbyDeviceDiscoveryManager : NSObject

@property (retain, nonatomic) CWFNearbyDeviceDiscoveryParameter *_currentNDDRequest;
@property (retain, nonatomic) NSString *_interface;
@property (nonatomic) BOOL _didDriverCrash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (copy) id /* block */ isNDDAllowed;
@property (copy) id /* block */ sendNDDRequest;
@property (copy) id /* block */ sendNDDXPCEvent;

- (id)init;
- (void).cxx_destruct;
- (int)handleNDDResultEvent:(id)a0 interface:(id)a1;
- (int)handleEvent:(long long)a0 withData:(id)a1 interface:(id)a2;
- (id)getEDSResultFromReport:(id)a0;
- (id)getRequestDataFromParams:(id)a0;
- (void)handleDextCrashEvent;
- (void)handleDriverAvailableEvent;
- (int)handleNDDDoneEvent:(id)a0 interface:(id)a1;
- (int)handleNDDRequestWithParams:(id)a0 clientName:(id)a1 interface:(id)a2;
- (int)handleRequest:(long long)a0 withData:(id)a1 interface:(id)a2;
- (int)isNDDRequestValid:(id)a0;

@end
