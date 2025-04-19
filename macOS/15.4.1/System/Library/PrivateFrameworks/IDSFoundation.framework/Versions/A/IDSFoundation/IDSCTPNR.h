@class NSString, IDSCTPNRInfo;
@protocol IDSCTPNRDelegate;

@interface IDSCTPNR : NSObject {
    id _coreTelephonyClient;
    NSString *_labelID;
    id _context;
    id<IDSCTPNRDelegate> _PNRDelegate;
    long long _carrierShortcodeSupported;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contextLock;
}

@property (weak, nonatomic) id<IDSCTPNRDelegate> PNRDelegate;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) BOOL isPNRSupported;
@property (readonly, nonatomic) BOOL isSIMReady;
@property (readonly, nonatomic) BOOL userOptInRequired;
@property (readonly, nonatomic) IDSCTPNRInfo *PNRInfo;
@property (readonly, nonatomic) unsigned long long slotID;

- (void).cxx_destruct;
- (id)_initWithCoreTelephonyClient:(id)a0 SIM:(id)a1;
- (BOOL)issuePNRForMechanism:(id)a0 pushToken:(id)a1 attemptCount:(unsigned int)a2 completion:(id /* block */)a3;

@end
