@class PBUnknownFields;

@interface GEOJunctionInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *_junctionElements;
    unsigned long long _junctionElementsCount;
    unsigned long long _junctionElementsSpace;
    int _drivingSide;
    int _junctionType;
    int _maneuverType;
    struct { unsigned char has_drivingSide : 1; unsigned char has_junctionType : 1; unsigned char has_maneuverType : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long junctionElementsCount;
@property (readonly, nonatomic) struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *junctionElements;
@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) int junctionType;
@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) int maneuverType;
@property (nonatomic) BOOL hasDrivingSide;
@property (nonatomic) int drivingSide;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsManeuverType:(id)a0;
- (int)StringAsDrivingSide:(id)a0;
- (int)StringAsJunctionType:(id)a0;
- (void)addJunctionElement:(struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })a0;
- (void)clearJunctionElements;
- (void)clearUnknownFields:(BOOL)a0;
- (id)drivingSideAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })junctionElementAtIndex:(unsigned long long)a0;
- (id)junctionTypeAsString:(int)a0;
- (id)maneuverTypeAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (void)setJunctionElements:(struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *)a0 count:(unsigned long long)a1;

@end
