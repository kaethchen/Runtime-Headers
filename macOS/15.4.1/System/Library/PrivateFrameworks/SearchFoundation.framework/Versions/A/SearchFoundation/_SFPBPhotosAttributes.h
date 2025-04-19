@class NSData, NSString;

@interface _SFPBPhotosAttributes : PBCodable <_SFPBPhotosAttributes, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long positionIndex;
@property (nonatomic) BOOL isEmbeddingMatched;
@property (nonatomic) BOOL isMetadataMatched;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) int photosSuggestionType;
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
- (id)initWithFacade:(id)a0;

@end
