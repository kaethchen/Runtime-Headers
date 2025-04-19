@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEORegionalResourceTileData : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributions;
    NSMutableArray *_filenames;
    NSMutableArray *_icons;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_attributions : 1; unsigned char read_filenames : 1; unsigned char read_icons : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *attributions;
@property (retain, nonatomic) NSMutableArray *filenames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)attributionType;
+ (Class)filenameType;
+ (Class)iconType;
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
- (void)addAttribution:(id)a0;
- (void)addFilename:(id)a0;
- (void)addIcon:(id)a0;
- (id)attributionAtIndex:(unsigned long long)a0;
- (unsigned long long)attributionsCount;
- (void)clearAttributions;
- (void)clearFilenames;
- (void)clearIcons;
- (void)clearUnknownFields:(BOOL)a0;
- (id)filenameAtIndex:(unsigned long long)a0;
- (unsigned long long)filenamesCount;
- (id)iconAtIndex:(unsigned long long)a0;
- (unsigned long long)iconsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
