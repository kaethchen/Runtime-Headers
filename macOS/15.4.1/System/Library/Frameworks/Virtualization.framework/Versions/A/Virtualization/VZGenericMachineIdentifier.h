@class NSData, NSString;

@interface VZGenericMachineIdentifier : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying> {
    struct Uuid { unsigned char _uuid[16]; } _uuid;
}

@property (readonly, copy) NSData *dataRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id).cxx_construct;
- (id)initWithDataRepresentation:(id)a0;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
