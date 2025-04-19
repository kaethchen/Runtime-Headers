@class NSSet, NSArray, NSString, NSNumber;

@interface RMModelAppManagedDeclaration_Attributes : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSArray *payloadAssociatedDomains;
@property (copy, nonatomic) NSNumber *payloadAssociatedDomainsEnableDirectDownloads;
@property (copy, nonatomic) NSString *payloadCellularSliceUUID;
@property (copy, nonatomic) NSString *payloadContentFilterUUID;
@property (copy, nonatomic) NSString *payloadDNSProxyUUID;
@property (copy, nonatomic) NSNumber *payloadHideable;
@property (copy, nonatomic) NSNumber *payloadLockable;
@property (copy, nonatomic) NSString *payloadRelayUUID;
@property (copy, nonatomic) NSNumber *payloadTapToPayScreenLock;
@property (copy, nonatomic) NSString *payloadVPNUUID;

+ (id)buildRequiredOnly;
+ (id)buildWithAssociatedDomains:(id)a0 associatedDomainsEnableDirectDownloads:(id)a1 cellularSliceUUID:(id)a2 contentFilterUUID:(id)a3 dnsProxyUUID:(id)a4 hideable:(id)a5 lockable:(id)a6 relayUUID:(id)a7 tapToPayScreenLock:(id)a8 VPNUUID:(id)a9;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
