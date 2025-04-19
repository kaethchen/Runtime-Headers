@class NSString, DDSTrialExperimentIdentifiers;

@interface DDSTrialAsset : DDSAsset {
    NSString *_description;
}

@property (readonly, copy) DDSTrialExperimentIdentifiers *experimentIdentifiers;

+ (id)attributesWithLocalURL:(id)a0;
+ (id)createWithExperimentIdentifiers:(id)a0 localURL:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithExperimentIdentifiers:(id)a0 attributes:(id)a1 localURL:(id)a2;

@end
