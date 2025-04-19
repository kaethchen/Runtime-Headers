@class NSData, NSString;

@interface VISTextConsolidationConfig : PBCodable <VISTextConsolidationConfig, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float match_cost_threshold;
@property (nonatomic) float font_size_start_reporting_threshold;
@property (nonatomic) float font_size_stop_reporting_threshold;
@property (nonatomic) float angular_offset_exponential_smoothing;
@property (nonatomic) float model_aspect_ratio;
@property (nonatomic) float confidence_threshold;
@property (nonatomic) float confidence_filter_ratio;
@property (nonatomic) float confidence_hysteresis_value_lag;
@property (nonatomic) float confidence_hysteresis_temporal_lag_before_confident;
@property (nonatomic) float confidence_hysteresis_temporal_lag_before_not_confident;
@property (nonatomic) BOOL enable_smoothed_transformation;
@property (nonatomic) float geo_cost_depth_threshold;
@property (nonatomic) float world_position_update_distance_threshold;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
