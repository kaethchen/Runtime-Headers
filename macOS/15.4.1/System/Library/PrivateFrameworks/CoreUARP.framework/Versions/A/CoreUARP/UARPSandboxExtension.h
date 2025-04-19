@interface UARPSandboxExtension : NSObject {
    long long _sandboxExtensionHandle;
}

+ (id)readTokenStringWithURL:(id)a0;
+ (id)readWriteTokenStringWithURL:(id)a0;

- (void)dealloc;
- (id)initWithTokenString:(id)a0;

@end
