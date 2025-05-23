@class NSUUID, IXApplicationIdentity;

@interface IXAppInstallCoordinatorSeed : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uniqueIdentifier;
@property (nonatomic) unsigned long long creator;
@property (nonatomic) unsigned int creatorEUID;
@property (nonatomic) unsigned long long intent;
@property (retain, nonatomic) IXApplicationIdentity *identity;
@property (nonatomic) unsigned long long installationDomain;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
