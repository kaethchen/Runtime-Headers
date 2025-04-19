@class NSObject, CWWiFiClient, NSString, NSDate, NSError, NSNumber, CWInterface;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CWUnlockSimulator : NSObject <CWEventDelegate> {
    CWWiFiClient *_wifiClient;
    CWInterface *_interface;
    CWInterface *_awdlInterface;
    NSError *_error;
    NSString *_peer;
    NSString *_pmk;
    NSNumber *_channel;
    NSNumber *_secChannel;
    NSNumber *_measurements;
    struct ether_addr { unsigned char octet[6]; } _peerAddr;
    NSObject<OS_dispatch_semaphore> *_completion;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isRanging;
    BOOL _isAwdlUp;
    NSDate *_requestTimestamp;
    NSDate *_linkUpTimestamp;
    NSDate *_discoveryTimestamp;
    NSDate *_measurementTimestamp;
}

- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (void)_doRanging;
- (id)doUnlockWithPeer:(id)a0 andPmk:(id)a1 onChannel:(id)a2 andMeasurements:(id)a3 secChannel:(id)a4;
- (void)rangingReportEventForWiFiInterfaceWithName:(id)a0 data:(id)a1 error:(id)a2;
- (void)virtualInterfaceStateChangedForWiFiInterfaceWithName:(id)a0;

@end
