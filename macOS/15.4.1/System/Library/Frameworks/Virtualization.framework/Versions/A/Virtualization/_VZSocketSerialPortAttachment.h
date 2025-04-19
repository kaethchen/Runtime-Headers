@class NSURL;

@interface _VZSocketSerialPortAttachment : VZSerialPortAttachment {
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } _address;
    NSURL *_socket_path;
}

@property (readonly) long long mode;
@property (readonly) const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *address;
@property (readonly) const struct sockaddr_un { unsigned char x0; unsigned char x1; char x2[104]; } *unixSocketAddress;

- (void).cxx_destruct;
- (id)initWithMode:(long long)a0 unixSocketAddress:(const struct sockaddr_un { unsigned char x0; unsigned char x1; char x2[104]; } *)a1;
- (struct Expected<std::variant<VzCore::VirtualMachineConfiguration::SerialPort::Attachments::FileDescriptors, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket>, NSError *> { union storage<std::variant<VzCore::VirtualMachineConfiguration::SerialPort::Attachments::FileDescriptors, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket>, NSError *> { char x0; struct variant<VzCore::VirtualMachineConfiguration::SerialPort::Attachments::FileDescriptors, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket> { struct __impl<VzCore::VirtualMachineConfiguration::SerialPort::Attachments::FileDescriptors, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::FileDescriptors, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::FileDescriptors> { struct FileDescriptors { struct optional<Base::FileDescriptor> { union { char x0; struct FileDescriptor { int x0; } x1; } x0; BOOL x1; } x0; struct optional<Base::FileDescriptor> { union { char x0; struct FileDescriptor { int x0; } x1; } x0; BOOL x1; } x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::SerialPort::Attachments::Socket> { struct Socket { int x0; struct FileDescriptor { int x0; } x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x1; id x2; } x0; BOOL x1; })_attachment;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)initWithMode:(long long)a0 address:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a1;

@end
