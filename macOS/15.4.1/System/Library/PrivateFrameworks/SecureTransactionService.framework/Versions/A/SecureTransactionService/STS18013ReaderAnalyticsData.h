@class NSString;

@interface STS18013ReaderAnalyticsData : NSObject

@property (readonly, nonatomic, getter=isTrusted) BOOL trusted;
@property (readonly, nonatomic) NSString *untrustedIdentifier;
@property (readonly, nonatomic) NSString *untrustedOrganization;
@property (readonly, nonatomic) NSString *untrustedIssuerIdentifier;
@property (readonly, nonatomic) NSString *untrustedIssuerOrganization;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTrusted:(BOOL)a0 untrustedIdentifier:(id)a1 untrustedOrganization:(id)a2 untrustedIssuerIdentifier:(id)a3 untrustedIssuerOrganization:(id)a4;
- (id)initWithUntrustedIdentifier:(id)a0 untrustedOrganization:(id)a1;

@end
