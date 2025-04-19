@class IXApplicationIdentity;

@interface IXDefaultAppMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long appType;
@property (readonly, nonatomic) unsigned long long offloadAnswer;
@property (readonly, nonatomic) IXApplicationIdentity *identity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithAppIdentity:(id)a0 appType:(unsigned long long)a1 offloadAnswer:(unsigned long long)a2;

@end
