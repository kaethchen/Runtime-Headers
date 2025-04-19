@class NSMutableSet, VZMacHardwareModel;

@interface VZMacOSConfigurationRequirements : NSObject {
    NSMutableSet *_variants;
    struct optional<std::array<unsigned long long, 5>> { union { char __null_state_; struct array<unsigned long long, 5UL> { unsigned long long __elems_[5]; } __val_; } ; BOOL __engaged_; } _requiredMobileDeviceVersion;
}

@property (readonly, copy) VZMacHardwareModel *hardwareModel;
@property (readonly) unsigned long long minimumSupportedCPUCount;
@property (readonly) unsigned long long minimumSupportedMemorySize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_variants;

@end
