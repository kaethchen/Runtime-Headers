@interface PLSearchSpotlightSandboxExtension : NSObject {
    long long _spotlightSandboxExtensionHandle;
}

- (void)dealloc;
- (void)_releaseSpotlightSandboxExtension;
- (id)initWithPathManager:(id)a0;
- (BOOL)_acquireSpotlightSandboxExtensionWithPathManager:(id)a0;

@end
