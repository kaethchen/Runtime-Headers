@class NSXPCListenerEndpoint;

@interface LSSettingsStoreConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSXPCListenerEndpoint *endpoint;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEndpoint:(id)a0;

@end
