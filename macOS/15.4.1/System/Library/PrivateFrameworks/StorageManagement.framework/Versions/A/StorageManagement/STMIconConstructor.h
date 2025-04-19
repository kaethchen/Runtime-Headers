@class NSString, NSSecurityScopedURLWrapper;

@interface STMIconConstructor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *string;
@property (retain) NSSecurityScopedURLWrapper *fileURLWrapper;
@property (readonly) long long type;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithBundleID:(id)a0;
- (id)initWithImageNamed:(id)a0;

@end
