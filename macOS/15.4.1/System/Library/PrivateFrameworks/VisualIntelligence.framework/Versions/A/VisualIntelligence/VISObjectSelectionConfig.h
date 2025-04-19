@class NSData, NSString;

@interface VISObjectSelectionConfig : PBCodable <VISObjectSelectionConfig, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float unknown_label_threshold;
@property (nonatomic) BOOL enable_text_state_selection;
@property (nonatomic) int max_number_of_text_entities;
@property (nonatomic) float text_book_world_distance_threshold;
@property (nonatomic) float bounding_box_padding_for_cropping;
@property (nonatomic) BOOL enable_object_selection;
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
