@class PKTransactionReleasedData, NSString, NSData, NSURL, NSNumber;

@interface PKISO18013DataReleaseRequest : NSObject

@property (retain, nonatomic) PKTransactionReleasedData *dataElements;
@property (retain, nonatomic) PKTransactionReleasedData *releasedData;
@property (retain, nonatomic) NSString *rpIdentifier;
@property (retain, nonatomic) NSString *organizationName;
@property (retain, nonatomic) NSString *organizationUnit;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) NSNumber *industryCode;
@property (retain, nonatomic) NSData *authenticationACL;
@property (retain, nonatomic) NSData *externalizedAuthenticationContext;
@property (nonatomic, getter=isTrustedRelyingParty) BOOL trustedRelyingParty;
@property (retain, nonatomic) NSString *analyticsIdentifier;
@property (retain, nonatomic) NSString *analyticsOrganizationName;

- (void).cxx_destruct;

@end
