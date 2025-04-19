@interface _CHSExtensionIdentityBufChanges : NSObject {
    unsigned char _changeTypeTokenString;
    unsigned int _replacementTokenString;
    unsigned char _changeTypeExtensionBundleIdentifier;
    unsigned int _replacementExtensionBundleIdentifier;
    unsigned char _changeTypeContainerBundleIdentifier;
    unsigned int _replacementContainerBundleIdentifier;
    unsigned char _changeTypeDeviceIdentifier;
    unsigned int _replacementDeviceIdentifier;
}

- (void)omitTokenString;
- (void)omitContainerBundleIdentifier;
- (void)omitDeviceIdentifier;
- (void)omitExtensionBundleIdentifier;
- (void)preserveContainerBundleIdentifier;
- (void)preserveDeviceIdentifier;
- (void)preserveExtensionBundleIdentifier;
- (void)preserveTokenString;
- (void)replaceContainerBundleIdentifier:(id)a0;
- (void)replaceDeviceIdentifier:(id)a0;
- (void)replaceExtensionBundleIdentifier:(id)a0;
- (void)replaceTokenString:(id)a0;

@end
