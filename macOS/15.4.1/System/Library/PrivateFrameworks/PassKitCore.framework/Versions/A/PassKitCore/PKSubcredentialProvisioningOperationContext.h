@class PKAppletSubcredential, PKPaymentPass, PKAppletSubcredentialSharingInvitation, PKSubcredentialEncryptedContainer, NSData, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface PKSubcredentialProvisioningOperationContext : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) PKAppletSubcredential *addedCredential;
@property (retain, nonatomic) PKSubcredentialEncryptedContainer *registrationData;
@property (retain, nonatomic) NSData *trackingAttestation;
@property (retain, nonatomic) PKSubcredentialEncryptedContainer *vehicleMobilizationEncryptedContainer;
@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *sentInvitation;
@property (nonatomic) BOOL hasAcceptedInvitation;
@property (copy, nonatomic) NSURL *passURL;
@property (retain, nonatomic) PKPaymentPass *downloadedPass;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
