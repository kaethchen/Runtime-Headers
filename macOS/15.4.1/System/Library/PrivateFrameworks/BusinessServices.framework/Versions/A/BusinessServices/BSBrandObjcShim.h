@class NSString, NSArray, NSURL, NSData, NSError;

@interface BSBrandObjcShim : NSObject {
    void /* unknown type, empty encoding */ brand;
}

@property (class, nonatomic, readonly) NSString *placeholderName;

@property (nonatomic, readonly) NSString *brandURI;
@property (nonatomic, readonly) BOOL isRCSChatBot;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) NSString *primaryPhoneNumber;
@property (nonatomic, readonly) NSString *primaryBrandColorHexString;
@property (nonatomic, readonly) NSString *secondaryBrandColorHexString;
@property (nonatomic, readonly) BOOL isVerified;
@property (nonatomic, readonly) NSString *verifiedBy;
@property (nonatomic, readonly) NSURL *website;
@property (nonatomic, readonly) NSString *messageNumber;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSURL *termsAndConditionsURL;
@property (nonatomic, readonly) NSURL *genericCSSTemplateURL;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedResponseTime;
@property (nonatomic, readonly) NSData *logoFingerprint;

+ (id)mockBrand;

- (id)init;
- (void).cxx_destruct;
- (void)clearCachedAssets:(id /* block */)a0;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)logoDataOfType:(long long)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 usingSim:(id)a2 completion:(id /* block */)a3;
- (void)assetDataOfType:(long long)a0 usingSim:(id)a1 completion:(id /* block */)a2;
- (void)logoDataOfType:(long long)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)logoFileURLOfType:(long long)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 completionHandler:(void (^)(NSURL *, NSString *, NSError *))a2;

@end
