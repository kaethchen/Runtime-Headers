@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPConnectionMetrics : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reportLock;
    NSObject<OS_dispatch_queue> *_reportQueue;
    NSObject<OS_dispatch_source> *_reportTimer;
    BOOL _sendReport;
    unsigned long long _eventCount;
}

@property (retain, nonatomic) NSMutableDictionary *rttMetrics;

+ (id)sharedMetrics;

- (id)init;
- (void).cxx_destruct;
- (unsigned char)lengthToBucketIndex:(unsigned long long)a0;
- (unsigned char)linkTypeToBucketIndex:(int)a0;
- (void)logConnectionWithDeviceModelFrom:(id)a0 deviceModelTo:(id)a1 error:(id)a2 initiator:(id)a3 isOnDemand:(BOOL)a4 isStereoPair:(BOOL)a5 lifetime:(unsigned long long)a6 linkType:(int)a7;
- (void)logMessageForClient:(id)a0 length:(unsigned long long)a1 linkType:(int)a2;
- (void)logRequestOnLinkType:(int)a0 length:(unsigned long long)a1 rtt:(unsigned long long)a2;
- (void)reportMetrics;
- (unsigned char)rttToBucketIndex:(unsigned long long)a0;

@end
