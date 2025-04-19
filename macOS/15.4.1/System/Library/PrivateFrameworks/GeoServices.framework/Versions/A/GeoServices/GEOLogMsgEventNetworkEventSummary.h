@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventNetworkEventSummary : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_groups;
}

@property (retain, nonatomic) NSMutableArray *groups;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)groupsType;
+ (BOOL)isValid:(id)a0;

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
- (void)addGroups:(id)a0;
- (void)clearGroups;
- (void)clearUnknownFields:(BOOL)a0;
- (id)groupsAtIndex:(unsigned long long)a0;
- (unsigned long long)groupsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
