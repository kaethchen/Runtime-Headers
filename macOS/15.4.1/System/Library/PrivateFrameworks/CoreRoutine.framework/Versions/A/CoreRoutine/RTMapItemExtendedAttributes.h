@class NSUUID, NSString;

@interface RTMapItemExtendedAttributes : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *addressIdentifier;
@property (nonatomic) BOOL isMe;
@property (nonatomic) double wifiConfidence;
@property (nonatomic) long long wifiFingerprintLabelType;

+ (id)fingerprintLabelTypeToString:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAddressIdentifier:(id)a0 isMe:(BOOL)a1 wifiConfidence:(double)a2 wifiFingerprintLabelType:(long long)a3;
- (id)initWithExtendedAttributesMO:(id)a0;
- (id)initWithIdentifier:(id)a0 addressIdentifier:(id)a1 isMe:(BOOL)a2 wifiConfidence:(double)a3 wifiFingerprintLabelType:(long long)a4;
- (BOOL)isEqualToMapItemExtendedAttributes:(id)a0;

@end
