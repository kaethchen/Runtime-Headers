@class NSURL, NSFileHandle;

@interface VZDiskBlockDeviceStorageDeviceAttachment : VZStorageDeviceAttachment {
    NSURL *_url;
}

@property (readonly) NSURL *_url;
@property (readonly) NSFileHandle *fileHandle;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly) long long synchronizationMode;

- (void).cxx_destruct;
- (void)_getAttachmentWithQueue:(struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { id x0; } x0; })a0 completionHandler:(id /* block */)a1;
- (id)_initWithURL:(id)a0 readOnly:(BOOL)a1 synchronizationMode:(long long)a2 error:(id *)a3;
- (id)_localFileSystemResources;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)initWithFileHandle:(id)a0 readOnly:(BOOL)a1 synchronizationMode:(long long)a2 error:(id *)a3;

@end
