@class PHASENumberMetaParameterDefinition;

@interface PHASEMixerDefinition : PHASEDefinition

@property (nonatomic) double gain;
@property (retain, nonatomic) PHASENumberMetaParameterDefinition *gainMetaParameterDefinition;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initInternal;

@end
