@interface BUSandboxExtension : NSObject {
    long long _extensionHandle;
}

- (void)dealloc;
- (void)close;
- (id)initWithExtensionToken:(const char *)a0;

@end
