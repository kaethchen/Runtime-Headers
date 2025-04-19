@class GEORevealedPlaceCardModuleTypeInfos, GEORevealedPlaceCardModuleTypeTitle, GEORevealedPlaceCardModuleTypeUnifiedActionRow, PBDataReader, GEORevealedPlaceCardModuleTypePhotos, PBUnknownFields, GEORevealedPlaceCardModuleTypeHours, GEORevealedPlaceCardModuleTypeShowcase;

@interface GEORevealedPlaceCardModule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORevealedPlaceCardModuleTypeHours *_hours;
    GEORevealedPlaceCardModuleTypeInfos *_infos;
    GEORevealedPlaceCardModuleTypePhotos *_photos;
    GEORevealedPlaceCardModuleTypeShowcase *_showcase;
    GEORevealedPlaceCardModuleTypeTitle *_title;
    GEORevealedPlaceCardModuleTypeUnifiedActionRow *_unifiedActionRow;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_hours : 1; unsigned char read_infos : 1; unsigned char read_photos : 1; unsigned char read_showcase : 1; unsigned char read_title : 1; unsigned char read_unifiedActionRow : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeTitle *title;
@property (readonly, nonatomic) BOOL hasUnifiedActionRow;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeUnifiedActionRow *unifiedActionRow;
@property (readonly, nonatomic) BOOL hasPhotos;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypePhotos *photos;
@property (readonly, nonatomic) BOOL hasShowcase;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeShowcase *showcase;
@property (readonly, nonatomic) BOOL hasHours;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeHours *hours;
@property (readonly, nonatomic) BOOL hasInfos;
@property (retain, nonatomic) GEORevealedPlaceCardModuleTypeInfos *infos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)moduleWithType:(int)a0;
+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
