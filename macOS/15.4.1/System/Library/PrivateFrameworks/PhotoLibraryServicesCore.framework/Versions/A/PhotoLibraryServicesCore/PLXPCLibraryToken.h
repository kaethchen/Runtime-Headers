@class NSURL, NSData, NSDictionary;

@interface PLXPCLibraryToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSURL *url;
@property (readonly, copy) NSData *sandboxExtension;
@property (readonly, copy) NSDictionary *clientOptions;

+ (id)clientOptions;
+ (id)clientToServiceSandboxExtensionForURL:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 sandboxExtension:(id)a1 clientOptions:(id)a2;

@end
