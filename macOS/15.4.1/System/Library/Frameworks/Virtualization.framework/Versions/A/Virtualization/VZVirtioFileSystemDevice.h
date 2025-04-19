@class NSString, VZVirtioFileSystemDeviceConfiguration, VZDirectoryShare, NSObject;
@protocol OS_dispatch_queue;

@interface VZVirtioFileSystemDevice : VZDirectorySharingDevice {
    VZVirtioFileSystemDeviceConfiguration *_configuration;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
}

@property (readonly, copy) NSString *tag;
@property (retain) VZDirectoryShare *share;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
