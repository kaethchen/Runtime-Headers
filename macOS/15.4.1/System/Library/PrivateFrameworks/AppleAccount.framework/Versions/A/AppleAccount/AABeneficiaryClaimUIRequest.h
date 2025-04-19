@class NSString;

@interface AABeneficiaryClaimUIRequest : AAAppleIDSettingsRequest {
    NSString *_claimCode;
}

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;
- (id)initWithGrandSlamAccount:(id)a0 accountStore:(id)a1 claimCode:(id)a2;

@end
