@class NSString;

@interface PKSharingExternalInvitationRequestMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSString *sharingSessionIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithSharingSessionIdentifier:(id)a0;

@end
