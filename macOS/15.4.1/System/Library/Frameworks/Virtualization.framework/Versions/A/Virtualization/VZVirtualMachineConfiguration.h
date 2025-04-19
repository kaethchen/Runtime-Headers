@class NSArray, VZBootLoader, _VZPanicDeviceConfiguration, _VZDebugStubConfiguration, NSObject, VZPlatformConfiguration;
@protocol OS_dispatch_group;

@interface VZVirtualMachineConfiguration : NSObject <NSCopying> {
    NSArray *_keyboards;
    NSArray *_acceleratorDevices;
    NSArray *_powerSourceDevices;
    NSArray *_audioDevices;
    NSArray *_biometricDevices;
    NSArray *_directorySharingDevices;
    NSArray *_entropyDevices;
    NSArray *_memoryBalloonDevices;
    NSArray *_networkDevices;
    NSArray *_socketDevices;
    NSArray *_storageDevices;
    NSArray *_serialPorts;
    NSArray *_consoleDevices;
    NSArray *_graphicsDevices;
    NSArray *_pointingDevices;
    NSArray *_multiTouchDevices;
    NSArray *_customVirtioDevices;
    NSArray *_MMIODevices;
    NSArray *_mailboxDevices;
    _VZDebugStubConfiguration *_debugStub;
    _VZPanicDeviceConfiguration *_panicDevice;
    NSArray *_coprocessors;
    struct vector<HvCore::SharedRamEntry, std::allocator<HvCore::SharedRamEntry>> { struct SharedRamEntry *__begin_; struct SharedRamEntry *__end_; struct __compressed_pair<HvCore::SharedRamEntry *, std::allocator<HvCore::SharedRamEntry>> { struct SharedRamEntry *__value_; } __end_cap_; } _sharedRamRegions;
    struct optional<Base::FileDescriptor> { union { char __null_state_; struct FileDescriptor { int _fd; } __val_; } ; BOOL __engaged_; } _coprocessorStorageFileDescriptor;
    struct optional<VzCore::VirtualMachineConfiguration::Coprocessor::ApConfiguration> { union { char __null_state_; struct ApConfiguration { unsigned long long ecid; unsigned int board_id; BOOL production_mode_enabled; } __val_; } ; BOOL __engaged_; } _apConfiguration;
    NSArray *_usbControllers;
    NSArray *_bifrostDevices;
    BOOL _nestedVirtualizationEnabled;
    BOOL _testIgnoreEntitlementChecks;
    struct optional<Base::DispatchGroup> { union { char __null_state_; struct DispatchGroup { struct CfPtr<NSObject<OS_dispatch_group> *> { NSObject<OS_dispatch_group> *_ptr; } _group; } __val_; } ; BOOL __engaged_; } _configuration_group;
}

@property (retain, setter=_setDebugStub:) _VZDebugStubConfiguration *_debugStub;
@property (retain, setter=_setPanicDevice:) _VZPanicDeviceConfiguration *_panicDevice;
@property (copy, setter=_setCustomVirtioDevices:) NSArray *_customVirtioDevices;
@property (setter=_setNestedVirtualizationEnabled:) BOOL _nestedVirtualizationEnabled;
@property (copy, setter=_setCoprocessors:) NSArray *_coprocessors;
@property (copy, setter=_setAcceleratorDevices:) NSArray *_acceleratorDevices;
@property (copy, setter=_setBiometricDevices:) NSArray *_biometricDevices;
@property (copy, setter=_setPowerSourceDevices:) NSArray *_powerSourceDevices;
@property (copy, setter=_setMultiTouchDevices:) NSArray *_multiTouchDevices;
@property (copy, setter=_setMMIODevices:) NSArray *_MMIODevices;
@property (copy, setter=_setBifrostDevices:) NSArray *_bifrostDevices;
@property (readonly, copy) NSArray *_localFileSystemResources;
@property (copy, setter=_setMailboxDevices:) NSArray *_mailboxDevices;
@property (setter=_setSharedRamRegions:) struct vector<HvCore::SharedRamEntry, std::allocator<HvCore::SharedRamEntry>> { struct SharedRamEntry *x0; struct SharedRamEntry *x1; struct __compressed_pair<HvCore::SharedRamEntry *, std::allocator<HvCore::SharedRamEntry>> { struct SharedRamEntry *x0; } x2; } _sharedRamRegions;
@property (setter=_setCoprocessorStorageFileDescriptor:) struct optional<Base::FileDescriptor> { union { char x0; struct FileDescriptor { int x0; } x1; } x0; BOOL x1; } _coprocessorStorageFileDescriptor;
@property (setter=_setApConfiguration:) struct optional<VzCore::VirtualMachineConfiguration::Coprocessor::ApConfiguration> { union { char x0; struct ApConfiguration { unsigned long long x0; unsigned int x1; BOOL x2; } x1; } x0; BOOL x1; } _apConfiguration;
@property (setter=_setTestIgnoreEntitlementChecks:) BOOL _testIgnoreEntitlementChecks;
@property (retain) VZBootLoader *bootLoader;
@property unsigned long long memorySize;
@property unsigned long long CPUCount;
@property (retain) VZPlatformConfiguration *platform;
@property (copy) NSArray *audioDevices;
@property (copy) NSArray *consoleDevices;
@property (copy) NSArray *directorySharingDevices;
@property (copy) NSArray *entropyDevices;
@property (copy) NSArray *memoryBalloonDevices;
@property (copy) NSArray *networkDevices;
@property (copy) NSArray *serialPorts;
@property (copy) NSArray *socketDevices;
@property (copy) NSArray *storageDevices;
@property (copy) NSArray *keyboards;
@property (copy) NSArray *pointingDevices;
@property (copy) NSArray *graphicsDevices;
@property (copy) NSArray *usbControllers;

+ (unsigned long long)maximumAllowedCPUCount;
+ (unsigned long long)maximumAllowedMemorySize;
+ (unsigned long long)minimumAllowedCPUCount;
+ (unsigned long long)minimumAllowedMemorySize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)validateWithError:(id *)a0;
- (BOOL)_isDuplicateIOUSBHostPassthroughDeviceConfigurationAt:(unsigned long long)a0 usbDeviceIndex:(unsigned long long)a1;
- (BOOL)validateSaveRestoreSupportWithError:(id *)a0;

@end
