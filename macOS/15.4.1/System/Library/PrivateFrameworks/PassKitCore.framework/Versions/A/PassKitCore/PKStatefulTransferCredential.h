@class PKSharingMessage, NSString, PKPassShare, PKSharingChannelHandle;

@interface PKStatefulTransferCredential : PKPaymentCredential

@property (readonly, nonatomic) PKSharingChannelHandle *handle;
@property (readonly, nonatomic) PKSharingMessage *invitation;
@property (readonly, nonatomic) PKPassShare *share;
@property (retain, nonatomic) NSString *originalShareURL;
@property (retain, nonatomic) NSString *accountAttestationAnonymizationSalt;

- (void).cxx_destruct;
- (id)initWithSharingChannelHandle:(id)a0 invitation:(id)a1 share:(id)a2;

@end
