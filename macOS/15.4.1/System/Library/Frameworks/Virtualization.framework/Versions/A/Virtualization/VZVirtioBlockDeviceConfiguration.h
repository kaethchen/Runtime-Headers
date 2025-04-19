@class NSString;

@interface VZVirtioBlockDeviceConfiguration : VZStorageDeviceConfiguration {
    NSString *_blockDeviceIdentifier;
    int _type;
}

@property (copy) NSString *blockDeviceIdentifier;

+ (BOOL)validateBlockDeviceIdentifier:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (void)_getStorageDeviceWithQueue:(struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { id x0; } x0; })a0 session:(const struct DispatchGroupSession { id x0; } *)a1 completionHandler:(id /* block */)a2;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
