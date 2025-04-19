@class NSString;

@interface LACClientInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *binaryPath;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *displayName;

+ (id)emptyClientInfo;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleId:(id)a0 binaryPath:(id)a1 displayName:(id)a2;
- (id)initWithBundleId:(id)a0 displayName:(id)a1;

@end
