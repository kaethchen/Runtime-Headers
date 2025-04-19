@class NSString, NSArray, NSData;

@interface _SFPBHashBucketDetail : PBCodable <_SFPBHashBucketDetail, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *hash_prefix;
@property (copy, nonatomic) NSArray *hash_details;
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
- (void)addHash_details:(id)a0;
- (void)clearHash_details;
- (id)hash_detailsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash_detailsCount;

@end
