@class PKSEConsistencyCheckDeviceCredentialAppletProperties, PKSECredentialAddress, NSData, PKSEConsistencyCheckDeviceCredentialISO18013Properties, NSNumber;

@interface PKSEConsistencyCheckDeviceCredential : NSObject

@property (readonly, nonatomic) PKSECredentialAddress *address;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSData *keyMaterialHash;
@property (retain, nonatomic) NSNumber *underlyingCredentialState;
@property (nonatomic) long long credentialType;
@property (readonly, nonatomic) BOOL shouldRegister;
@property (readonly, nonatomic) BOOL isManagedByTSM;
@property (retain, nonatomic) PKSEConsistencyCheckDeviceCredentialAppletProperties *appletProperties;
@property (retain, nonatomic) PKSEConsistencyCheckDeviceCredentialISO18013Properties *isoProperties;

+ (id)deviceCredentialWithApplet:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 state:(unsigned long long)a1 underlyingCredentialState:(id)a2 address:(id)a3;

@end
