@class NSURL, NSSecurityScopedURLWrapper;

@interface FSGenericURLResource : FSResource

@property (retain) NSSecurityScopedURLWrapper *urlWrapper;
@property (readonly, copy) NSURL *URL;

+ (BOOL)supportsSecureCoding;
+ (id)secureResourceWithURL:(id)a0 readonly:(BOOL)a1;
+ (id)resourceWithURL:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 readonly:(BOOL)a1;
- (long long)kind;
- (id)makeProxy;
- (id)getResourceID;
- (id)initAsSecureURL:(id)a0 readonly:(BOOL)a1;

@end
