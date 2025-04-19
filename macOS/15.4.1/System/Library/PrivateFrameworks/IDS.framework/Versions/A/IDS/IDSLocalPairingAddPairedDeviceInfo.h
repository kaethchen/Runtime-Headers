@class NSUUID, NSData;

@interface IDSLocalPairingAddPairedDeviceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *cbuuid;
@property (readonly, nonatomic) long long pairingProtocolVersion;
@property (readonly, nonatomic) NSData *BTOutOfBandKey;
@property (nonatomic) BOOL supportsIPsecWithSPPLink;
@property (nonatomic) long long pairingType;
@property (retain, nonatomic) NSData *bluetoothMACAddress;
@property (nonatomic) BOOL shouldPairDirectlyOverIPsec;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCBUUID:(id)a0 pairingProtocolVersion:(long long)a1 BTOutOfBandKey:(id)a2;

@end
