@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEORegionalResourceTile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributions;
    NSMutableArray *_childrens;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    struct { unsigned char read_unknownFields : 1; unsigned char read_attributions : 1; unsigned char read_childrens : 1; unsigned char read_iconChecksums : 1; unsigned char read_icons : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int z;
@property (retain, nonatomic) NSMutableArray *childrens;
@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *attributions;
@property (retain, nonatomic) NSMutableArray *iconChecksums;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)attributionType;
+ (Class)childrenType;
+ (Class)iconChecksumType;
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
- (void)addChildren:(id)a0;
- (void)addAttribution:(id)a0;
- (void)addIcon:(id)a0;
- (void)addIconChecksum:(id)a0;
- (id)attributionAtIndex:(unsigned long long)a0;
- (unsigned long long)attributionsCount;
- (id)childrenAtIndex:(unsigned long long)a0;
- (unsigned long long)childrensCount;
- (void)clearAttributions;
- (void)clearChildrens;
- (void)clearIconChecksums;
- (void)clearIcons;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)containsTileKey:(const struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned char x3 : 4; union { struct { unsigned short x0 : 10; unsigned short x1 : 10; unsigned short x2 : 12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEORoadSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x7; struct _GEOContourLinesKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 4; unsigned char x4 : 8; unsigned long x5 : 50; } x8; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned short x5 : 16; unsigned char x6 : 6; } x9; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3 : 1; unsigned long x4 : 39; } x10; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x11; struct _GEOS2TileKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 3; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; unsigned long x7 : 37; } x12; struct _GEOLiveTileKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned short x3 : 14; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 4; unsigned long x7 : 36; } x13; } x2; } *)a0;
- (id)iconAtIndex:(unsigned long long)a0;
- (id)iconChecksumAtIndex:(unsigned long long)a0;
- (unsigned long long)iconChecksumsCount;
- (unsigned long long)iconsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
