@class NSURL, _VZDiskImage;

@interface VZDiskImageStorageDeviceAttachment : VZStorageDeviceAttachment {
    _VZDiskImage *_diskImage;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly) long long cachingMode;
@property (readonly) long long synchronizationMode;

+ (id)_diskImageStorageDeviceAttachmentWithDiskImage:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;
- (void)_getAttachmentWithQueue:(struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { id x0; } x0; })a0 completionHandler:(id /* block */)a1;
- (id)_localFileSystemResources;
- (void)_updateDiskSize:(unsigned long long)a0;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 cachingMode:(long long)a2 synchronizationMode:(long long)a3 error:(id *)a4;

@end
