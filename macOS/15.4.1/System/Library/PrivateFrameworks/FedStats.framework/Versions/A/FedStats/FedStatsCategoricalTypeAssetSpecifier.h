@class NSRegularExpression, NSString;

@interface FedStatsCategoricalTypeAssetSpecifier : NSObject

@property (readonly, copy) NSRegularExpression *regex;
@property (readonly, nonatomic) BOOL isDynamic;
@property (readonly, nonatomic) BOOL isRequiredForCollectionKey;
@property (readonly, copy, nonatomic) NSString *assetSpecifierKey;

+ (id)assetSpecifierWithKey:(id)a0 requiredForCollectionKey:(BOOL)a1 error:(id *)a2;
+ (id)mutateParameters:(id)a0 forKey:(id)a1 usingFieldValues:(id)a2 assetURLs:(id)a3 requiredFields:(id *)a4 assetNames:(id *)a5 error:(id *)a6;

- (void).cxx_destruct;
- (id)parameters;
- (id)assetSpecifierValueForDataPoint:(id)a0 error:(id *)a1;
- (id)initWithAssetSpecifierKey:(id)a0 dynamic:(BOOL)a1 requiredForCollectionKey:(BOOL)a2;

@end
