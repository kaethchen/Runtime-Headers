@class NSData, NSUUID, NSString;

@interface CDPCustodianRecoveryInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *wrappedRKC;
@property (readonly, copy, nonatomic) NSData *wrappingKey;
@property (readonly, copy, nonatomic) NSUUID *custodianUUID;
@property (readonly, copy, nonatomic) NSString *recordBuildVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWrappedRKC:(id)a0 wrappingKey:(id)a1 custodianUUID:(id)a2;
- (id)initWithWrappedRKC:(id)a0 wrappingKey:(id)a1 custodianUUID:(id)a2 recordBuildVersion:(id)a3;

@end
