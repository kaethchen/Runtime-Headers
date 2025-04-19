@class NSUUID, NSData, NSString;

@interface OTInheritanceKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSData *wrappingKeyData;
@property (readonly, nonatomic) NSString *wrappingKeyString;
@property (readonly, nonatomic) NSData *wrappedKeyData;
@property (readonly, nonatomic) NSString *wrappedKeyString;
@property (readonly, nonatomic) NSData *claimTokenData;
@property (readonly, nonatomic) NSString *claimTokenString;
@property (readonly, nonatomic) NSData *recoveryKeyData;

+ (id)parseBase32:(id)a0 checksumSize:(unsigned long long)a1 error:(id *)a2;
+ (id)base32:(const char *)a0 len:(unsigned long long)a1;
+ (id)printableWithData:(id)a0 checksumSize:(unsigned long long)a1 error:(id *)a2;
+ (id)unbase32:(const char *)a0 len:(unsigned long long)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 error:(id *)a1;
- (BOOL)generateWrappingWithError:(id *)a0;
- (id)initWithUUID:(id)a0 claimTokenData:(id)a1 wrappingKeyData:(id)a2 error:(id *)a3;
- (id)initWithUUID:(id)a0 oldIK:(id)a1 error:(id *)a2;
- (id)initWithWrappedKeyData:(id)a0 wrappingKeyData:(id)a1 claimTokenData:(id)a2 uuid:(id)a3 error:(id *)a4;
- (id)initWithWrappedKeyData:(id)a0 wrappingKeyData:(id)a1 uuid:(id)a2 error:(id *)a3;
- (id)initWithWrappedKeyData:(id)a0 wrappingKeyString:(id)a1 uuid:(id)a2 error:(id *)a3;
- (id)initWithWrappedKeyString:(id)a0 wrappingKeyData:(id)a1 uuid:(id)a2 error:(id *)a3;
- (BOOL)isEqualToOTInheritanceKey:(id)a0;
- (BOOL)isKeyEquals:(id)a0;
- (BOOL)isRecoveryKeyEqual:(id)a0;
- (BOOL)unwrapWithError:(id *)a0;
- (BOOL)wrapWithWrappingKey:(id)a0 error:(id *)a1;

@end
