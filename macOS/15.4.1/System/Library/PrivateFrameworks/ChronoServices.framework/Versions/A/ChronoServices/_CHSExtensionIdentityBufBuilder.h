@class AFBBufferBuilder;

@interface _CHSExtensionIdentityBufBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct ExtensionIdentityBufBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setTokenString:(id)a0;
- (void)setDeviceIdentifier:(id)a0;
- (void)setExtensionBundleIdentifier:(id)a0;
- (void)setContainerBundleIdentifier:(id)a0;

@end
