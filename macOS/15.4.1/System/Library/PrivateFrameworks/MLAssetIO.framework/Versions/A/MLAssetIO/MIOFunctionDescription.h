@class NSString, NSArray;

@interface MIOFunctionDescription : NSObject <NSCopying> {
    struct FunctionDescription { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArenaLite { void *ptr_; } _internal_metadata_; struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } input_; struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } output_; struct RepeatedPtrField<CoreML::Specification::FeatureDescription> { struct Arena *arena_; int current_size_; int total_size_; struct Rep *rep_; } state_; struct ArenaStringPtr { void *ptr_; } name_; struct ArenaStringPtr { void *ptr_; } predictedfeaturename_; struct ArenaStringPtr { void *ptr_; } predictedprobabilitiesname_; int _cached_size_; } _functionDescriptionParams;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *inputDescriptions;
@property (readonly, copy, nonatomic) NSArray *outputDescriptions;
@property (readonly, copy, nonatomic) NSArray *stateDescriptions;
@property (readonly, copy, nonatomic) NSString *predictedFeatureName;
@property (readonly, copy, nonatomic) NSString *predictedProbabilitiesName;
@property (readonly, copy, nonatomic) NSArray *classLabels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSpecification:(const void *)a0 classLabels:(id)a1;

@end
