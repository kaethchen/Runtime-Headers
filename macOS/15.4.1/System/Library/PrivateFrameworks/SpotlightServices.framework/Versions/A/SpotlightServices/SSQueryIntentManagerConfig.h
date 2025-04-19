@class SRResources, NSSet, NSDictionary, NSDate;

@interface SSQueryIntentManagerConfig : NSObject {
    SRResources *_resources;
    NSDictionary *_baseConfig;
    NSDate *_expirationDate;
}

@property (readonly, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) NSSet *serverDomainDemotionExclusionSet;
@property (readonly, nonatomic) NSDictionary *conditionalExtraSuggestions;
@property (readonly, nonatomic) NSDictionary *intentOverrides;

+ (id)sharedInstance;
+ (id)_parseServerDomainExclusionSet:(id)a0;
+ (id)_getParsecDomainMapping;
+ (id)_parseConditionalExtraSuggestions:(id)a0;
+ (id)_parseIntentOverrides:(id)a0;

- (void).cxx_destruct;
- (void)update:(BOOL)a0;
- (void)update;
- (BOOL)expired;
- (id)_defaultOptions;
- (void)_clearConfig;
- (void)_updateInternalConfig:(id)a0;
- (BOOL)getBoolParameter:(id)a0;
- (float)getFloatParameter:(id)a0;
- (int)getIntParameter:(id)a0;
- (void)updateWithResources:(id)a0 defaults:(id)a1;

@end
