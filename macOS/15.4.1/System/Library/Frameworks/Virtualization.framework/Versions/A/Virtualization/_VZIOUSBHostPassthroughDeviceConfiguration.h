@class NSString, NSUUID;

@interface _VZIOUSBHostPassthroughDeviceConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying, VZUSBDeviceConfiguration> {
    struct CfPtr<const __CFData *> { struct __CFData *_ptr; } _device_signature;
    struct CfPtr<const __CFDictionary *> { struct __CFDictionary *_ptr; } _device_properties;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSUUID *uuid;

+ (id)fromLocationID:(unsigned int)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)initWithService:(unsigned int)a0 error:(id *)a1;

@end
