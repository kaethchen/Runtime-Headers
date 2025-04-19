@class NSUUID, HMDAccessoryNetworkCredential, HMDHome, HMDAccessoryPairingEvent, HAPAccessoryServer;
@protocol MKFAccessory;

@interface HMDNewPairedAccessoryServerInfo : NSObject

@property (readonly) HAPAccessoryServer *server;
@property (readonly) NSUUID *primaryAccessoryUUID;
@property (readonly) id<MKFAccessory> hostAccessory;
@property (readonly) long long certificationStatus;
@property (readonly) HMDAccessoryNetworkCredential *networkCredential;
@property (readonly) HMDAccessoryPairingEvent *pairingEvent;
@property (readonly, weak) HMDHome *home;

- (id)description;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0 home:(id)a1 primaryAccessoryUUID:(id)a2 certificationStatus:(long long)a3 hostAccessory:(id)a4 networkCredential:(id)a5 pairingEvent:(id)a6;

@end
