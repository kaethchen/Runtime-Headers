@interface SiriTTSTrainerAudioQualityAssessment : NSObject {
    struct map<AudioQualityMetric, double, std::less<AudioQualityMetric>, std::allocator<std::pair<const AudioQualityMetric, double>>> { struct __tree<std::__value_type<AudioQualityMetric, double>, std::__map_value_compare<AudioQualityMetric, std::__value_type<AudioQualityMetric, double>, std::less<AudioQualityMetric>>, std::allocator<std::__value_type<AudioQualityMetric, double>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<AudioQualityMetric, double>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<AudioQualityMetric, std::__value_type<AudioQualityMetric, double>, std::less<AudioQualityMetric>>> { unsigned long long __value_; } __pair3_; } __tree_; } _metrics;
}

@property (readonly, nonatomic) float SPL;
@property (readonly, nonatomic) float SNR;
@property (readonly, nonatomic) float SPL_unnormalized;
@property (readonly, nonatomic) float SNR_unnormalized;
@property (readonly, nonatomic) float SPL_end;
@property (readonly, nonatomic) float SNR_end;
@property (readonly, nonatomic) float SPL_unnormalized_end;
@property (readonly, nonatomic) float SNR_unnormalized_end;
@property (readonly, nonatomic) float SPL_threshold;
@property (readonly, nonatomic) float SNR_threshold;

+ (float)DO_NOT_NORMALIZE;
+ (float)default_target_db;
+ (float)default_threshold_db;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
