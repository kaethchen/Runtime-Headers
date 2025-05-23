@class NSString, CKDPDateStatistics, CKDPDate, CKDPRecord;

@interface CKDPRecordSaveResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) BOOL hasTimeStatistics;
@property (retain, nonatomic) CKDPDateStatistics *timeStatistics;
@property (readonly, nonatomic) BOOL hasServerFields;
@property (retain, nonatomic) CKDPRecord *serverFields;
@property (readonly, nonatomic) BOOL hasExpirationTime;
@property (retain, nonatomic) CKDPDate *expirationTime;

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

@end
