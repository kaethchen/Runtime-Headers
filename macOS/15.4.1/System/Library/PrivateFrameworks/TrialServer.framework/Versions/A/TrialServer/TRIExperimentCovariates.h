@class NSDictionary, TRIExperimentRecord;

@interface TRIExperimentCovariates : NSObject <TRIExperimentCovariateProviding> {
    TRIExperimentRecord *_experimentRecord;
    NSDictionary *_dictionary;
}

- (void).cxx_destruct;
- (id)dictionary;
- (unsigned long long)_isExperimentActivated:(id)a0;
- (id)initWithExperimentRecord:(id)a0;
- (id)tri_contextValueWithName:(id)a0;

@end
