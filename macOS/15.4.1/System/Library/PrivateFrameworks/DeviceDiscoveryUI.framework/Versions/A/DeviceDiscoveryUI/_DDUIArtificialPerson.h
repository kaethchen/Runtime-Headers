@class NSString, RPRemoteDisplayPerson;

@interface _DDUIArtificialPerson : NSObject <DDUIPerson>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *accountAltDSID;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) unsigned int discoveredDeviceTypes;
@property (readonly, nonatomic) RPRemoteDisplayPerson *rapportPerson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initGuestPairPerson;
- (id)initSessionPairedPersonWithDevice:(id)a0;

@end
