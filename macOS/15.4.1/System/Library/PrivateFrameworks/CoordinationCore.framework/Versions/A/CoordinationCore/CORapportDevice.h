@class NSString, CORapportTransport, NSUUID, RPCompanionLinkDevice;

@interface CORapportDevice : NSObject <CODiscoveryRecordProtocol, CORapportTransportCompatibleProcotol>

@property (readonly, retain, nonatomic) CORapportTransport *sourceTransport;
@property (readonly, nonatomic) RPCompanionLinkDevice *device;
@property (readonly, copy, nonatomic) NSString *IDSIdentifier;
@property (retain, nonatomic) NSUUID *HomeKitIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ companionLinkProvider;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresInquiry;
- (BOOL)hasSameBackingDeviceAs:(id)a0;
- (id)initWithCompanionLinkDevice:(id)a0 sourceTransport:(id)a1;
- (id)newTransportWithExecutionContext:(id)a0;
- (BOOL)producesElectionCapableTransport;

@end
