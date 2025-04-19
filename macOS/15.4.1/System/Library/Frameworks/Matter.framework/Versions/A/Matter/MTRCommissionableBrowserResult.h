@class NSString, NSNumber, NSMutableDictionary;

@interface MTRCommissionableBrowserResult : NSObject

@property (retain, nonatomic) NSString *instanceName;
@property (retain, nonatomic) NSNumber *vendorID;
@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) NSNumber *discriminator;
@property (nonatomic) BOOL commissioningMode;
@property (retain, nonatomic) NSMutableDictionary *interfaces;
@property (nonatomic) struct Optional<chip::Controller::SetUpCodePairerParameters> { struct ValueHolder { BOOL mHasValue; union Value { struct SetUpCodePairerParameters { struct PeerAddress { struct IPAddress { unsigned int Addr[4]; } mIPAddress; unsigned char mTransportType; unsigned short mPort; struct InterfaceId { unsigned int mPlatformInterface; } mInterface; unsigned long long mRemoteId; } mPeerAddress; unsigned int mSetupPINCode; struct optional<chip::SetupDiscriminator> { union { char __null_state_; struct SetupDiscriminator { unsigned short mDiscriminator; BOOL mIsShortDiscriminator; } __val_; } ; BOOL __engaged_; } mSetupDiscriminator; struct Spake2pVerifier { unsigned char mW0[32]; unsigned char mL[65]; } mPASEVerifier; BOOL mHasPASEVerifier; struct Optional<chip::ReliableMessageProtocolConfig> { struct ValueHolder { BOOL mHasValue; union Value { struct ReliableMessageProtocolConfig { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mIdleRetransTimeout; struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mActiveRetransTimeout; struct duration<unsigned short, std::ratio<1, 1000>> { unsigned short __rep_; } mActiveThresholdTime; } mData; } mValue; } mValueHolder; } mMRPConfig; struct BleLayer *mBleLayer; void *mConnectionObject; void *mDiscoveredObject; char mHostName[41]; struct InterfaceId { unsigned int mPlatformInterface; } mInterfaceId; } mData; } mValue; } mValueHolder; } params;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
