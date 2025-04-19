@interface _LSCurrentBundleProxyQuery : _LSBundleQuery

@property (class, readonly) double cacheInterval;

+ (BOOL)supportsSecureCoding;
+ (id)currentBundleProxyQuery;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;

@end
