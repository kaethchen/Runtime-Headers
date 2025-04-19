@class NSUUID, NSString, NSArray, NSData, PKPassEntitlement, NSSet, PKSubcredentialEncryptedContainer, PKAppletSubcredentialSharingConfiguration;

@interface PKAppletSubcredential : NSObject <NSSecureCoding> {
    unsigned long long _allSupportedRadioTechnologies;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long credentialState;
@property (retain, nonatomic) PKSubcredentialEncryptedContainer *trackingRequest;
@property (retain, nonatomic) NSData *transactionKey;
@property (retain, nonatomic) NSArray *transactionKeyCertificateChain;
@property (retain, nonatomic) NSString *appletIdentifier;
@property (nonatomic) unsigned long long carKeyVehicleVersion;
@property (nonatomic) unsigned long long carKeyServerVersion;
@property (nonatomic) unsigned long long keyClass;
@property (nonatomic) unsigned long long credentialAuthorityType;
@property (nonatomic) BOOL isManagedByTSM;
@property (copy, nonatomic) NSData *_readerIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long state;
@property (retain, nonatomic) PKPassEntitlement *entitlement;
@property (nonatomic) long long credentialType;
@property (readonly, nonatomic, getter=isShareable) BOOL shareable;
@property (readonly, nonatomic) BOOL canShare;
@property (retain, nonatomic) PKAppletSubcredentialSharingConfiguration *sharingConfiguration;
@property (copy, nonatomic) NSString *invitationIdentifier;
@property (copy, nonatomic) NSString *partnerIdentifier;
@property (readonly, nonatomic) NSString *manufacturerIdentifier;
@property (copy, nonatomic) NSString *pairedReaderIdentifier;
@property (copy, nonatomic) NSString *brandIdentifier;
@property (copy, nonatomic) NSString *sharingFriendlyName;
@property (nonatomic) BOOL isOnlineImmobilizerToken;
@property (nonatomic) unsigned long long supportedRadioTechnologies;
@property (nonatomic) unsigned long long allSupportedRadioTechnologies;
@property (copy, nonatomic) NSString *endpointIdentifier;
@property (readonly, nonatomic, getter=isSharedCredential) BOOL sharedCredential;
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier;
@property (copy, nonatomic) NSString *originatorIDSHandle;
@property (copy, nonatomic) NSString *isoFormat;
@property (retain, nonatomic) NSSet *aliroGroupResolvingKeys;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)asDictionary;
- (id)initWithKeyInformation:(id)a0;

@end
