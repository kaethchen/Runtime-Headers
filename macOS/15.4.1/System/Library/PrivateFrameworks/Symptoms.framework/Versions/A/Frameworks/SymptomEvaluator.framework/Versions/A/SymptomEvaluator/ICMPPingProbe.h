@class NSString, NSData, NSMutableArray, NSObject;
@protocol OS_dispatch_source, ICMPPingProbeDelegate;

@interface ICMPPingProbe : TestProbe {
    BOOL stopTestOnFirstSuccess;
    NSObject<OS_dispatch_source> *timeoutTimer;
    NSObject<OS_dispatch_source> *pingTimer;
    NSObject<OS_dispatch_source> *burstTimer;
    NSObject<OS_dispatch_source> *_socketReadSource;
    NSData *_hostAddressData;
    int _socket;
    unsigned short _identifier;
    unsigned short _nextSequenceNumber;
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
@property (retain, nonatomic) id<ICMPPingProbeDelegate> delegate;
@property (retain, nonatomic) NSString *ipAddress;
@property (retain, nonatomic) NSString *hostName;
@property (nonatomic) unsigned long long payloadSize;

+ (void)initialize;
+ (BOOL)loadStringUtils;
+ (unsigned long long)icmpIPv4OffsetInPacket:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)stopTest;
- (void)startICMPPingTestTo:(id)a0 hostName:(id)a1 interface:(unsigned int)a2 pingCount:(long long)a3 interPingInterval:(double)a4 burstCount:(long long)a5 interBurstInterval:(double)a6 timeout:(double)a7 stopTestOnFirstSuccess:(BOOL)a8;

@end
