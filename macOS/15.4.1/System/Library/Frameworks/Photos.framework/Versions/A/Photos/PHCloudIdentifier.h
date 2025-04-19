@class NSString;

@interface PHCloudIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) PHCloudIdentifier *notFoundIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *archivalStringValue;
@property (readonly, nonatomic) NSString *localCloudIdentifier;
@property (readonly, nonatomic) NSString *identifierCode;
@property (readonly, nonatomic) NSString *stableHash;
@property (readonly, nonatomic) NSString *stringValue;

+ (id)_notFoundIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStringValue:(id)a0;
- (id)initAsNotFoundIdentifier;
- (id)initWithArchivalStringValue:(id)a0;
- (id)initWithLocalCloudIdentifier:(id)a0 identifierCode:(id)a1 stableHash:(id)a2;

@end
