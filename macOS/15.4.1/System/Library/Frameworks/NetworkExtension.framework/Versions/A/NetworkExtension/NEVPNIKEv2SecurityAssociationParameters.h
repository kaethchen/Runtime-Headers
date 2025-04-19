@class NSArray;

@interface NEVPNIKEv2SecurityAssociationParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {
    NSArray *_additionalKeyExchangeMethods;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long encryptionAlgorithm;
@property long long integrityAlgorithm;
@property long long diffieHellmanGroup;
@property int lifetimeMinutes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
