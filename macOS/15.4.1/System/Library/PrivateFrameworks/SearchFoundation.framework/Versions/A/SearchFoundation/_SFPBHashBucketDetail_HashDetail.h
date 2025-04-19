@class NSString, NSArray, NSData;

@interface _SFPBHashBucketDetail_HashDetail : PBCodable <_SFPBHashBucketDetail_HashDetail, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *full_hash;
@property (nonatomic) BOOL has_summary;
@property (copy, nonatomic) NSArray *sba_entity_types;
@property (nonatomic) BOOL has_table_of_contents;
@property (copy, nonatomic) NSString *matched_url_variant;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)addSba_entity_types:(int)a0;
- (void)clearSba_entity_types;
- (int)sba_entity_typesAtIndex:(unsigned long long)a0;
- (unsigned long long)sba_entity_typesCount;

@end
