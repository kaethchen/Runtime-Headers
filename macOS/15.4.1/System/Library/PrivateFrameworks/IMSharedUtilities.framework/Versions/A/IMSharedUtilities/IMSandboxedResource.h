@class NSString;

@interface IMSandboxedResource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long sandboxExtensionHandle;
@property (retain, nonatomic) id resource;
@property (retain, nonatomic) NSString *sandboxExtension;

+ (Class)resourceClass;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char *)_sandboxExtensionForAuditToken:(struct { unsigned int x0[8]; })a0;
- (char *)_sandboxExtensionForPID:(int)a0;
- (BOOL)accessResourceByConsumingSandboxExtensionWithBlock:(id /* block */)a0;
- (void)authorizeForAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)authorizeForPID:(int)a0;

@end
