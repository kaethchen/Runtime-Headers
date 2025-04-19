@class NSString, PKSharingMessage, PKPassShare;

@interface PKPendingStatefulTransferProvisioning : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *transportIdentifier;
@property (retain, nonatomic) PKSharingMessage *invitation;
@property (retain, nonatomic) PKPassShare *share;
@property (retain, nonatomic) NSString *originalShareURL;
@property (retain, nonatomic) NSString *accountAttestationAnonymizationSalt;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)credential;
- (BOOL)representsPass:(id)a0;
- (id)initForDatabase;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)credentialWithHandle:(id)a0;
- (id)initWithTransportIdentifier:(id)a0 invitation:(id)a1 share:(id)a2;
- (BOOL)representsCredential:(id)a0;

@end
