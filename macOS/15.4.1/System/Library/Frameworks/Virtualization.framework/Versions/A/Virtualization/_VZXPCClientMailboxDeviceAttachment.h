@class NSString, NSObject;
@protocol OS_xpc_object;

@interface _VZXPCClientMailboxDeviceAttachment : _VZMailboxDeviceAttachment <_VZVirtualMachineConfigurationEncodable> {
    struct optional<VzCore::VirtualMachineConfiguration::Coprocessor::MailboxHandle> { union { char __null_state_; struct MailboxHandle { struct Endpoint { struct CfPtr<NSObject<OS_xpc_object> *> { NSObject<OS_xpc_object> *_ptr; } _endpoint; } endpoint; } __val_; } ; BOOL __engaged_; } _mailbox_handle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
