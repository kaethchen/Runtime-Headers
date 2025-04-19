@class NSError, ECDKIMMessageHeader, NSString;

@interface ECMessageAuthenticationResult : NSObject

@property (nonatomic) BOOL dkimAttemptedHeaderVerification;
@property (nonatomic) BOOL dkimHeadersVerified;
@property (nonatomic) BOOL dkimAttemptedBodyVerification;
@property (nonatomic) BOOL dkimBodyVerified;
@property (retain, nonatomic) ECDKIMMessageHeader *bestDKIMSignatureHeader;
@property (retain, nonatomic) NSError *dkimError;
@property (nonatomic) BOOL dkimHasServerResult;
@property (nonatomic) BOOL dkimServerVerified;
@property (copy, nonatomic) NSString *dkimServerSigningDomain;
@property (copy, nonatomic) NSString *dkimServerResultSelector;
@property (nonatomic) long long dmarcStatus;
@property (nonatomic) long long dmarcReceiverPolicy;
@property (nonatomic) long long dmarcIdentifierAlignment;
@property (nonatomic) long long dmarcServerStatus;

- (void).cxx_destruct;

@end
