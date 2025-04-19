@class NSArray;

@interface PKWebServiceMerchantCategoryCodesFeature : PKWebServiceRegionFeature

@property (readonly, copy, nonatomic) NSArray *appleCardUnsupportedMerchantCategoryCodes;
@property (readonly, copy, nonatomic) NSArray *appleCashUnsupportedMerchantCategoryCodes;

+ (id)merchantCategoryCodesFeatureWithWebService:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 region:(id)a1;

@end
