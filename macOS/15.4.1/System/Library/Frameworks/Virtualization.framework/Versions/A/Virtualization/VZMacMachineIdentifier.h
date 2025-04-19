@class NSData, NSString, _VZMacSerialNumber;

@interface VZMacMachineIdentifier : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying> {
    unsigned long long _ECID;
    BOOL _disableECIDChecks;
    _VZMacSerialNumber *_serialNumber;
}

@property (readonly) unsigned long long _ECID;
@property (readonly) _VZMacSerialNumber *_serialNumber;
@property (readonly) BOOL _ECIDChecksDisabled;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_machineIdentifierForVirtualMachineClone;
+ (id)_machineIdentifierForVirtualMachineCloneWithECID:(unsigned long long)a0 serialNumber:(id)a1;
+ (id)_machineIdentifierForVirtualMachineCloneWithSerialNumber:(id)a0;
+ (id)_machineIdentifierWithECID:(unsigned long long)a0 serialNumber:(id)a1;
+ (id)_machineIdentifierWithSerialNumber:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataRepresentation:(id)a0;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
