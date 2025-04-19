@class NSString, NSXPCConnection, _EXExtensionIdentity, NSObject;
@protocol PrintServiceExtension_com_apple_printing_PrintServiceExtensionProtocol, OS_dispatch_queue;

@interface PMPrintServiceExtension_Context : NSObject {
    NSXPCConnection *_xpc;
    _EXExtensionIdentity *_instance;
    id<PrintServiceExtension_com_apple_printing_PrintServiceExtensionProtocol> _proxy;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (copy) NSString *extensionBundleIdentifier;

+ (id)cachedPropertyForKey:(id)a0 forURL:(id)a1;
+ (id)contextForIdentifier:(id)a0;
+ (id)extensionIdentifierForURL:(id)a0;
+ (void)setCachedProperty:(id)a0 forKey:(id)a1 forURL:(id)a2;
+ (void)storeExtensionIdentifier:(id)a0 forURL:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInstance:(id)a0;
- (void)proxyErrror:(id)a0;
- (void)withProxySync:(id /* block */)a0;
- (void)xpcInterrupted;
- (void)xpcInvalidated;

@end
