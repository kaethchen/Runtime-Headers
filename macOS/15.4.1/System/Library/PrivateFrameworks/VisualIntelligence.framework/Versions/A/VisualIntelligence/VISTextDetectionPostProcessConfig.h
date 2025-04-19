@class NSData, NSString;

@interface VISTextDetectionPostProcessConfig : PBCodable <VISTextDetectionPostProcessConfig, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enable_text_bounding_box_merge;
@property (nonatomic) float text_merge_iou_threshold;
@property (nonatomic) BOOL enable_text_bounding_box_suppress;
@property (nonatomic) BOOL enable_text_font_size_suppress;
@property (nonatomic) float font_size_suppress_threshold;
@property (nonatomic) BOOL enable_text_confidence_suppress;
@property (nonatomic) float text_confidence_suppress_threshold;
@property (nonatomic) BOOL enable_text_bbox_size_suppress;
@property (nonatomic) float text_bbox_size_suppress_threshold;
@property (nonatomic) BOOL enable_text_negative_objects_suppress;
@property (nonatomic) float text_suppress_iou_threshold;
@property (nonatomic) float padding_for_text_result_merge;
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
