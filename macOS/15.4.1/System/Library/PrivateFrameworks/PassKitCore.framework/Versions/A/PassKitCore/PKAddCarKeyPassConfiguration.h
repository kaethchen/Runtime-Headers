@class NSString;

@interface PKAddCarKeyPassConfiguration : PKAddSecureElementPassConfiguration <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long referralSource;
@property (copy, nonatomic) NSString *pairedReaderIdentifier;
@property (copy, nonatomic) NSString *productPlanIdentifier;
@property (copy, nonatomic) NSString *vehicleName;
@property (nonatomic) BOOL ownerKeyPairingAvailable;
@property (nonatomic) BOOL proofOfOwnershipPresent;
@property (nonatomic) BOOL onlineServicesActivated;
@property (nonatomic) BOOL passwordEnteredManually;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) unsigned long long supportedRadioTechnologies;
@property (copy, nonatomic) NSString *manufacturerIdentifier;
@property (retain, nonatomic) NSString *provisioningTemplateIdentifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)vehicleInitiatedPairingLaunchURL;

@end
