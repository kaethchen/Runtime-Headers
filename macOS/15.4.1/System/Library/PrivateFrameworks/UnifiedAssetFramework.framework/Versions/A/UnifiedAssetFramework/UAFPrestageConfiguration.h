@class NSString, NSArray;

@interface UAFPrestageConfiguration : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *usages;

+ (BOOL)isValid:(id)a0 error:(id *)a1;
+ (BOOL)predicateMatch:(id)a0;
+ (id)fromContentsOfURL:(id)a0 error:(id *)a1;
+ (id)supportedFileVersions;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)usages:(id)a0;
- (id)mergeAssetSetUsages:(id)a0;

@end
