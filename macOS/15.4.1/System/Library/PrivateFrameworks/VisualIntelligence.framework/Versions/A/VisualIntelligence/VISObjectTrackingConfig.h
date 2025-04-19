@class NSData, NSString;

@interface VISObjectTrackingConfig : PBCodable <VISObjectTrackingConfig, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float confidence_for_cache_update;
@property (nonatomic) int max_tracked_object_count;
@property (nonatomic) float geo_distance_threshold;
@property (nonatomic) float reticle_padding;
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
