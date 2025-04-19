@class NSDictionary;

@interface CMISmartStyleCommonSettings : NSObject {
    NSDictionary *_configurationByVariant;
    NSDictionary *_tuningParametersByVariant;
    NSDictionary *_styleEngineTuningsBySmartStyleTuningVariantAndCast;
}

+ (id)configurationForVariant:(unsigned long long)a0;
+ (id)tuningParametersForVariant:(unsigned long long)a0;
+ (id)styleEngineSpecificTuningForTuningVariant:(id)a0 andCast:(id)a1;

- (void).cxx_destruct;

@end
