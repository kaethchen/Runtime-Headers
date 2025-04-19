@class PLAssetsdClientSandboxExtensions;

@interface PLAssetsdClientState : NSObject {
    _Atomic BOOL _isOpen;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isOpen;
- (BOOL)consumeSandboxExtensions:(id)a0;

@end
