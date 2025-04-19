@class NSString, NSArray, NSDictionary, NSURL;

@interface PKProductInfo : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_productInfoDictionary;
    NSURL *_baseURL;
    NSArray *_cachedPackageReferences;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *productIdentifier;
@property (readonly) NSString *productVersion;
@property (readonly) NSArray *localizations;
@property (readonly) NSArray *packageReferences;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSURL *baseURL;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)distributionURLForLocalization:(id)a0;
- (id)_distributionsDictionary;
- (id)initWithDictionary:(id)a0 baseURL:(id)a1;
- (id)preferredDistributionURL;
- (void)setDistributionURL:(id)a0 forLocalization:(id)a1;
- (void)setPackageReferences:(id)a0;
- (void)setProductIdentifier:(id)a0 version:(id)a1;

@end
