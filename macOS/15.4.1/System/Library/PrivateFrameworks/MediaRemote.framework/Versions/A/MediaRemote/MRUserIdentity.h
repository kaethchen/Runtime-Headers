@class NSData, NSString, _MRUserIdentityProtobuf;

@interface MRUserIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _MRUserIdentityProtobuf *protobuf;
@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long type;

+ (id)basicIdentityWithIdentifier:(id)a0 displayName:(id)a1;
+ (void)fetchIdentityForDSID:(id)a0 completion:(id /* block */)a1;
+ (id)resolvableIdentityWithIdentifier:(id)a0;
+ (id)resolvableIdentityWithIdentifier:(id)a0 displayName:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 type:(long long)a2;
- (id)initWithProtobuf:(id)a0;
- (id)initWithProtobufData:(id)a0;

@end
