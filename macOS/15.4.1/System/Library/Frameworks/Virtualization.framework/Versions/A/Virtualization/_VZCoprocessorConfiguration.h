@class NSString;

@interface _VZCoprocessorConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, _VZVirtualMachineConfigurationResourceProvider, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (struct Expected<VzCore::VirtualMachineConfiguration::Coprocessor, NSError *> { union storage<VzCore::VirtualMachineConfiguration::Coprocessor, NSError *> { char x0; struct Coprocessor { int x0; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x1; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x2; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x3; struct optional<Base::FileDescriptor> { union { char x0; struct FileDescriptor { int x0; } x1; } x0; BOOL x1; } x4; struct FileDescriptor { int x0; } x5; struct optional<VzCore::VirtualMachineConfiguration::DebugStub> { union { char x0; struct DebugStub { int x0; struct FileDescriptor { int x0; } x1; } x1; } x0; BOOL x1; } x6; struct vector<VzCore::VirtualMachineConfiguration::Coprocessor::MailboxHandle, std::allocator<VzCore::VirtualMachineConfiguration::Coprocessor::MailboxHandle>> { struct MailboxHandle *x0; struct MailboxHandle *x1; struct __compressed_pair<VzCore::VirtualMachineConfiguration::Coprocessor::MailboxHandle *, std::allocator<VzCore::VirtualMachineConfiguration::Coprocessor::MailboxHandle>> { struct MailboxHandle *x0; } x2; } x7; struct vector<HvCore::SharedRamEntry, std::allocator<HvCore::SharedRamEntry>> { struct SharedRamEntry *x0; struct SharedRamEntry *x1; struct __compressed_pair<HvCore::SharedRamEntry *, std::allocator<HvCore::SharedRamEntry>> { struct SharedRamEntry *x0; } x2; } x8; struct ApConfiguration { unsigned long long x0; unsigned int x1; BOOL x2; } x9; } x1; id x2; } x0; BOOL x1; })_coprocessor;
- (id)_localFileSystemResources;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)makeCoprocessorForVirtualMachine:(id)a0 coprocessorIndex:(unsigned long long)a1;

@end
