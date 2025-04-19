@class TSClockManager, NSString, TSgPTPManager, NSObject, TSgPTPClock;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SSTimebase : NSObject <TSClockManagerClient, TSgPTPManagerClient>

@property struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *targetAddress;
@property (retain) NSString *interface;
@property (copy) id /* block */ interruptionBlock;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property unsigned long long timerIntervalInSeconds;
@property (retain) NSObject<OS_dispatch_source> *heartBeatTimer;
@property (retain) TSClockManager *clockManager;
@property (retain) TSgPTPManager *tsManager;
@property (retain) TSgPTPClock *tsClock;
@property (nonatomic) unsigned long long clockIdentifier;
@property (readonly) unsigned long long grandMasterIdentifier;
@property BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTimebase;
+ (id)timebaseWithAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 andInterface:(const char *)a1;
+ (id)timebaseWithClockIdentifier:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (void)setInterruptionHandler:(id /* block */)a0;
- (void)activateWithHandler:(id /* block */)a0;
- (void)startWithHandler:(id /* block */)a0;
- (void)handleInterruption;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (void)interruptedConnectionForClockManager:(id)a0;
- (void)interruptedConnectionForgPTPManager:(id)a0;
- (void)startEmittingHeartBeatSignposts;
- (id)initWithAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 andInterface:(const char *)a1;
- (void)stopEmittingHeartBeatSignposts;

@end
