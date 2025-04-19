@class NSUUID, NSData, CBAdvertiser, NSDate;

@interface SCDAElectionParticipantIdVendor : NSObject {
    BOOL _reinitialize;
    BOOL _deallocInProgress;
    CBAdvertiser *_cbAdvertiser;
    NSData *_bleAddress;
    NSDate *_lastAddressChange;
    NSData *_rotatedBLEAddress;
    NSDate *_lastRotatedAddressChange;
}

@property (class, readonly) NSUUID *nullId;
@property (class, readonly) NSUUID *staleId;

+ (void)initialize;
+ (id)computeId:(id)a0 withPayload:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_init;
- (void)_reinit;
- (void)_clearCBAdvertiser;
- (void)_fetchBTLEAddress;
- (id)computeIds:(id)a0;
- (void)fetchBTLEAddressIfRequired;

@end
