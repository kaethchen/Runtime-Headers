@class NSString, NSData, NSMutableArray, NSObject;
@protocol ICMPPingProbeDelegate, OS_dispatch_source, OS_dispatch_semaphore;

@interface ICMPPingProbe : TestProbe {
    BOOL stopTestOnFirstSuccess;
    NSObject<OS_dispatch_source> *timeoutTimer;
    NSObject<OS_dispatch_source> *pingTimer;
    NSObject<OS_dispatch_source> *burstTimer;
    NSData *_hostAddressData;
    struct __CFHost { } *_host;
    struct __CFSocket { } *_socket;
    unsigned short _identifier;
    unsigned short _nextSequenceNumber;
    id /* block */ _completionHandler;
}

@property (retain, nonatomic) NSMutableArray *pings;
@property (nonatomic) unsigned long long successCount;
@property (nonatomic) unsigned long long failedCount;
@property (nonatomic) float percentComplete;
@property (nonatomic) unsigned long long pingCount;
@property (nonatomic) double interPingInterval;
@property (nonatomic) unsigned long long burstCount;
@property (nonatomic) double interBurstInterval;
@property (nonatomic) unsigned long long currentBurst;
@property (nonatomic) BOOL hostAddressIsIPv6;
@property (nonatomic) unsigned int interfaceIndex;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pingRunLoopReady;
@property (nonatomic) struct __CFRunLoop { } *pingRunLoop;
@property (nonatomic) struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *pingThread;
@property (nonatomic) struct __CFRunLoopSource { } *rls;
@property (nonatomic) id<ICMPPingProbeDelegate> delegate;
@property (nonatomic) NSString *ipAddress;
@property (nonatomic) NSString *hostName;
@property (nonatomic) unsigned long long payloadSize;

+ (void)initialize;
+ (BOOL)loadStringUtils;
+ (unsigned long long)icmpIPv4OffsetInPacket:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)readData;
- (void)stopTest;
- (void)didFailWithError:(id)a0;
- (void)stopRunLoop;
- (void)sendPing;
- (void)sendPingWithData:(id)a0;
- (void)startThePinging;
- (id)_shortErrorFromError:(id)a0;
- (BOOL)isValidIPv4PingResponsePacket:(id)a0 isForMe:(BOOL *)a1 sequence:(unsigned short *)a2 isBadPacket:(BOOL *)a3;
- (BOOL)isValidIPv6PingResponsePacket:(id)a0 isForMe:(BOOL *)a1 sequence:(unsigned short *)a2 isBadPacket:(BOOL *)a3;
- (void)pingDidFailToSendToAddress:(id)a0 packet:(id)a1 sequence:(unsigned int)a2 error:(id)a3;
- (void)pingDidReceivePingResponseFromAddress:(id)a0 packet:(id)a1 sequence:(unsigned int)a2;
- (void)pingDidReceiveUnexpectedPingResponseFromAddress:(id)a0 packet:(id)a1 sequence:(unsigned int)a2;
- (void)pingDidSendToAddress:(id)a0 packet:(id)a1 sequence:(unsigned int)a2;
- (void)startICMPPingTestTo:(id)a0 hostName:(id)a1 interface:(unsigned int)a2 pingCount:(long long)a3 interPingInterval:(double)a4 burstCount:(long long)a5 interBurstInterval:(double)a6 timeout:(double)a7 stopTestOnFirstSuccess:(BOOL)a8;
- (void)startPing:(id)a0 hostName:(id)a1 interface:(unsigned int)a2 pingCount:(long long)a3 interPingInterval:(double)a4 burstCount:(long long)a5 interBurstInterval:(double)a6 timeout:(double)a7 stopTestOnFirstSuccess:(BOOL)a8 withCompletion:(id /* block */)a9;
- (BOOL)startRunLoop;
- (void)stopDataTransfer;

@end
