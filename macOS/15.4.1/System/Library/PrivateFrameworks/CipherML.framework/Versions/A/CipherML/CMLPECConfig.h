@class NSData;

@interface CMLPECConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *serializedPECConfig;
@property (readonly, copy, nonatomic) NSData *serializedKeyStatus;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPECConfig:(id)a0 keyStatus:(id)a1;
- (BOOL)isEqualToPECConfig:(id)a0;

@end
