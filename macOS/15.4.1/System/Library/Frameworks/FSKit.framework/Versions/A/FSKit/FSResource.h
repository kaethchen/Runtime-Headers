@class NSString;

@interface FSResource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long kind;
@property (readonly, getter=getResourceID) NSString *resourceID;
@property int state;
@property int state;
@property (readonly, nonatomic, getter=isRevoked) BOOL revoked;

+ (id)dynamicCast:(id)a0;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)makeProxy;
- (void)revoke;
- (id)initResource;

@end
