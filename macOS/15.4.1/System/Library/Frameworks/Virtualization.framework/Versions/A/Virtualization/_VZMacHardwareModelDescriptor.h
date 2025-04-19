@class NSString;

@interface _VZMacHardwareModelDescriptor : NSObject {
    struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } _platformVersion;
    struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } _boardID;
    struct optional<NSOperatingSystemVersion> { union { char __null_state_; struct { long long majorVersion; long long minorVersion; long long patchVersion; } __val_; } ; BOOL __engaged_; } _minimumSupportedHostOSVersion;
    long long _isa;
    unsigned int _variantID;
    NSString *_variantName;
    struct optional<NSOperatingSystemVersion> { union { char __null_state_; struct { long long majorVersion; long long minorVersion; long long patchVersion; } __val_; } ; BOOL __engaged_; } _initialGuestMacOSVersion;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setPlatformVersion:(unsigned int)a0;
- (void)setBoardID:(unsigned int)a0;
- (void)setISA:(long long)a0;
- (void)setInitialGuestMacOSVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (void)setMinimumSupportedHostOSVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (void)setVariantID:(unsigned int)a0 variantName:(id)a1;

@end
