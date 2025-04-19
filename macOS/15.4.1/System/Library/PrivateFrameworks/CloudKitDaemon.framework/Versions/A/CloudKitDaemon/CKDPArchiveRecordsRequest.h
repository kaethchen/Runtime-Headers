@class NSMutableArray;

@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *idsToArchives;

+ (id)options;
+ (Class)idsToArchiveType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addIdsToArchive:(id)a0;
- (void)clearIdsToArchives;
- (id)idsToArchiveAtIndex:(unsigned long long)a0;
- (unsigned long long)idsToArchivesCount;

@end
