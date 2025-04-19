@class NSData, NSString;

@interface VISObjectConsolidationConfig : PBCodable <VISObjectConsolidationConfig, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float frame_object_iou_threshold;
@property (nonatomic) BOOL enable_packaged_products;
@property (nonatomic) BOOL enable_text_from_object_detection;
@property (nonatomic) float nearest_object_distance_threshold;
@property (nonatomic) float object_distance_update_threshold;
@property (nonatomic) float adaptive_object_distance_threshold_ratio;
@property (nonatomic) float minimal_adaptive_object_distance_threshold;
@property (nonatomic) float nearest_object_iou_threshold;
@property (nonatomic) float object_iou_update_threshold;
@property (nonatomic) float label_prob_dist_threshold;
@property (nonatomic) float sharpness_threshold;
@property (nonatomic) BOOL enable_visual_distance;
@property (nonatomic) float tracked_decay_rate;
@property (nonatomic) float boundary_object_padding_threshold;
@property (nonatomic) float boundary_object_size_threshold;
@property (nonatomic) float normal_decay_rate;
@property (nonatomic) float depth_distance_threshold;
@property (nonatomic) float reticle_padding;
@property (nonatomic) float pixel_distance_threshold;
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
