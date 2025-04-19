@class NSObject, NSString, _VZVirtioDeviceSpecificConfiguration;
@protocol _VZCustomVirtioDeviceConfigurationDelegate, OS_dispatch_queue, OS_xpc_object;

@interface _VZCustomVirtioDeviceConfiguration : NSObject <NSCopying> {
    NSObject<OS_xpc_object> *_endpoint;
    unsigned int _customVirtioDeviceIndex;
    struct BitSet<unsigned int, 64UL> { struct array<unsigned int, 2UL> { unsigned int __elems_[2]; } _blocks; } _mandatoryDeviceFeatures;
    struct BitSet<unsigned int, 64UL> { struct array<unsigned int, 2UL> { unsigned int __elems_[2]; } _blocks; } _optionalDeviceFeatures;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    BOOL _supportsSaveRestore;
    struct optional<unsigned short> { union { char __null_state_; unsigned short __val_; } ; BOOL __engaged_; } _deviceID;
    struct optional<unsigned short> { union { char __null_state_; unsigned short __val_; } ; BOOL __engaged_; } _PCIVendorID;
    struct optional<unsigned short> { union { char __null_state_; unsigned short __val_; } ; BOOL __engaged_; } _PCIDeviceID;
    struct optional<unsigned short> { union { char __null_state_; unsigned short __val_; } ; BOOL __engaged_; } _PCISubsystemVendorID;
    struct optional<unsigned short> { union { char __null_state_; unsigned short __val_; } ; BOOL __engaged_; } _PCISubsystemID;
    NSString *_pluginName;
    NSString *_pluginPersonality;
}

@property unsigned short deviceID;
@property unsigned char PCIClassID;
@property unsigned char PCISubclassID;
@property unsigned short virtioQueueCount;
@property (retain) _VZVirtioDeviceSpecificConfiguration *deviceSpecificConfiguration;
@property (weak) id<_VZCustomVirtioDeviceConfigurationDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *deviceQueue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_setPluginName:(id)a0;
- (unsigned short)_PCISubsystemID;
- (unsigned short)_PCIDeviceID;
- (unsigned short)_PCISubsystemVendorID;
- (unsigned short)_PCIVendorID;
- (id)_pluginName;
- (id)_pluginPersonality;
- (void)_setPCIDeviceID:(unsigned short)a0;
- (void)_setPCISubsystemID:(unsigned short)a0;
- (void)_setPCISubsystemVendorID:(unsigned short)a0;
- (void)_setPCIVendorID:(unsigned short)a0;
- (void)_setPluginPersonality:(id)a0;
- (void)_setSupportsSaveRestore:(BOOL)a0;
- (BOOL)_supportsSaveRestore;
- (unsigned int)mandatoryFeaturesAtIndex:(unsigned long long)a0;
- (unsigned int)optionalFeaturesAtIndex:(unsigned long long)a0;
- (void)setMandatoryFeatures:(unsigned int)a0 atIndex:(unsigned long long)a1;
- (void)setOptionalFeatures:(unsigned int)a0 atIndex:(unsigned long long)a1;

@end
