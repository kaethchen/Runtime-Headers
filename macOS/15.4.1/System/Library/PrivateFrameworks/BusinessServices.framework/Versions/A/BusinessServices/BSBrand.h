@class NSString, BSBrandObjcShim, BSBrandMessagingDetails;

@interface BSBrand : NSObject {
    BSBrandMessagingDetails *_messagingDetails;
    long long _sandboxExtension;
}

@property (readonly, nonatomic) BOOL isAppleMainBrand;
@property (readonly, nonatomic) BOOL isAppleMakoBrand;
@property (readonly, nonatomic, getter=_primaryBrandColorHexString) NSString *primaryBrandColorHexString;
@property (readonly, nonatomic, getter=_secondaryBrandColorHexString) NSString *secondaryBrandColorHexString;
@property (readonly, nonatomic) BSBrandObjcShim *shim;
@property (readonly, nonatomic) NSString *brandURI;
@property (readonly, nonatomic) BOOL isRCSChatBot;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *primaryPhoneNumber;
@property (readonly, nonatomic, getter=isVerified) BOOL verified;
@property (readonly, nonatomic) BSBrandMessagingDetails *messagingDetails;
@property (readonly, nonatomic) NSString *localizedResponseTime;

+ (id)placeholderName;
+ (id)mockBrand;

- (void).cxx_destruct;
- (id)localizedDescription;
- (id)address;
- (id)emailAddress;
- (id)categories;
- (id)website;
- (id)verifiedBy;
- (id)termsAndConditionsURL;
- (id)messageNumber;
- (id)logoFingerprint;
- (void)clearCachedAssets:(id /* block */)a0;
- (id)genericCSSTemplateURL;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)logoDataOfType:(long long)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 fingerprint:(id)a2 completion:(id /* block */)a3;
- (void)logoDataOfType:(long long)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 usingSim:(id)a2 completion:(id /* block */)a3;
- (id)_initWithShim:(id)a0;
- (void)assetDataForType:(long long)a0 usingSim:(id)a1 completion:(id /* block */)a2;
- (void)clearCachedLogos:(id /* block */)a0;
- (void)logoDataOfType:(long long)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)logoFileURLForType:(long long)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
