@class NSURL, NSString, NSData;

@interface NSSecurityScopedURLWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSURL *url;
@property (readonly, getter=isReadonly) BOOL readonly;
@property (readonly, getter=isBackedByFileProvider) BOOL backedByFileProvider;
@property (readonly) NSString *providerIdentifier;
@property (readonly) NSString *domainIdentifier;
@property (readonly) NSString *itemIdentifier;
@property (readonly) NSData *_scope;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithProviderIdentifier:(id)a0 domainIdentifier:(id)a1 itemIdentifier:(id)a2;
- (id)initWithURL:(id)a0 readonly:(BOOL)a1;
- (id)initWithURL:(id)a0 readonly:(BOOL)a1 extensionClass:(id)a2;
- (id)initWithURL:(id)a0 readonly:(BOOL)a1 scope:(id)a2;

@end
