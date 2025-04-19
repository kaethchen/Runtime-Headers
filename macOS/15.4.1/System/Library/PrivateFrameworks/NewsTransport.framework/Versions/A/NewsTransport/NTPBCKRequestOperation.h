@class NTPBCKOperation, NTPBCKRequestOperationHeader, NTPBCKQueryRetrieveRequest, NTPBCKRecordRetrieveRequest;

@interface NTPBCKRequestOperation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) NTPBCKRequestOperationHeader *header;
@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) NTPBCKOperation *request;
@property (readonly, nonatomic) BOOL hasRecordRetrieveRequest;
@property (retain, nonatomic) NTPBCKRecordRetrieveRequest *recordRetrieveRequest;
@property (readonly, nonatomic) BOOL hasQueryRetrieveRequest;
@property (retain, nonatomic) NTPBCKQueryRetrieveRequest *queryRetrieveRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
