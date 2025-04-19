@interface _VZPL011SerialPortConfiguration : VZSerialPortConfiguration {
    long long _role;
}

+ (long long)serialPortType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (struct Expected<VzCore::VirtualMachineConfiguration::SerialPort, NSError *> { union storage<VzCore::VirtualMachineConfiguration::SerialPort, NSError *> { char x0; struct SerialPort { int x0; struct optional<VzCore::VirtualMachineConfiguration::SerialPort::Role> { union { char x0; int x1; } x0; BOOL x1; } x1; struct optional<std::variant<VzCore::VirtualMachineConfiguration::SerialPort::Attachments::FileDescriptors, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket>> { union { char x0; struct variant<VzCore::VirtualMachineConfiguration::SerialPort::Attachments::FileDescriptors, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket> { struct __impl<VzCore::VirtualMachineConfiguration::SerialPort::Attachments::FileDescriptors, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::FileDescriptors, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::FileDescriptors> { struct FileDescriptors { struct optional<Base::FileDescriptor> { union { char x0; struct FileDescriptor { int x0; } x1; } x0; BOOL x1; } x0; struct optional<Base::FileDescriptor> { union { char x0; struct FileDescriptor { int x0; } x1; } x0; BOOL x1; } x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket> { struct Socket { int x0; struct FileDescriptor { int x0; } x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x1; } x0; BOOL x1; } x2; } x1; id x2; } x0; BOOL x1; })_serialPort;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
