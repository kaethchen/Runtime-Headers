@class NSObject, NSString, GKSimpleTimer, NSMutableSet, GKDiscoveryPeerConnection, NSMutableArray, NSNumber;
@protocol OS_dispatch_queue;

@interface GKDiscoveryPeer : NSObject <GKSimpleTimerDelegate>

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *playerID;
@property (copy, nonatomic) NSString *deviceID;
@property (retain, nonatomic) GKSimpleTimer *resolveTimer;
@property (copy, nonatomic) id /* block */ resolveTimeoutHandler;
@property (retain, nonatomic) NSMutableSet *interfaces;
@property (retain, nonatomic) NSMutableArray *orderedInterfaces;
@property (retain, nonatomic) NSMutableArray *attemptedInterfaces;
@property (retain, nonatomic) NSNumber *chosenInterface;
@property (retain, nonatomic) GKDiscoveryPeerConnection *trialConnection;
@property (nonatomic) BOOL shouldSignalDiscovery;
@property (nonatomic) double discoveryTimeStamp;
@property (retain, nonatomic) NSMutableArray *sendDataBuffer;
@property (nonatomic) int state;
@property (retain, nonatomic) GKDiscoveryPeerConnection *connection;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithServiceName:(id)a0;
- (id)stringForState:(int)a0;
- (void)timeout:(id)a0;
- (void)flushDataBuffer;
- (void)sendData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)cleanUpForBrowse;
- (void)didLoseInterface:(id)a0;
- (id)nextInterfaceIndex;
- (BOOL)parseServiceNameForInit:(id)a0;
- (void)startResolveTimerWithHandler:(id /* block */)a0;
- (void)stopResolveTimer;

@end
