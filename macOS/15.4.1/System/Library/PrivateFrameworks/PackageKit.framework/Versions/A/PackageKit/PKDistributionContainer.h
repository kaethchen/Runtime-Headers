@class PKDistribution;

@interface PKDistributionContainer : NSObject {
    PKDistribution *_distribution;
}

+ (id)_lprojSubpathsInDirectory:(id)a0;
+ (id)localizationNamesAtPath:(id)a0;

- (void)dealloc;
- (id)distribution;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (id)_initWithDistributionData:(id)a0 distributionURL:(id)a1 error:(id *)a2;
- (id)_resourceContentType:(id)a0 forKey:(id)a1;
- (id)_resourceDataForKey:(id)a0;
- (id)initWithArchive:(id)a0 error:(id *)a1;
- (id)initWithDistributionData:(id)a0 distributionURL:(id)a1 error:(id *)a2;
- (id)resourceDataForKey:(id)a0 returningMIMEType:(id *)a1 returningUTI:(id *)a2;
- (id)stringsDictionary;

@end
