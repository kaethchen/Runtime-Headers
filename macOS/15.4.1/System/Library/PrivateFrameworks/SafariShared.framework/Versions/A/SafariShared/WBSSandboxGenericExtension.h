@class NSString;

@interface WBSSandboxGenericExtension : WBSSandboxExtension {
    struct optional<long long> { union { char __null_state_; long long __val_; } ; BOOL __engaged_; } _handle;
}

@property (readonly, copy, nonatomic) NSString *extensionToken;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)consumeResource;
- (void)releaseResource;
- (id)initWithURL:(id)a0 extensionToken:(id)a1;

@end
