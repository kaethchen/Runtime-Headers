@class NTPBCKOperation, NTPBCKQueryRetrieveResponse, NTPBCKResponseOperationResult, NTPBCKRecordRetrieveResponse;

@interface NTPBCKResponseOperation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasResponse;
@property (retain, nonatomic) NTPBCKOperation *response;
@property (readonly, nonatomic) BOOL hasResult;
@property (retain, nonatomic) NTPBCKResponseOperationResult *result;
@property (readonly, nonatomic) BOOL hasRecordRetrieveResponse;
@property (retain, nonatomic) NTPBCKRecordRetrieveResponse *recordRetrieveResponse;
@property (readonly, nonatomic) BOOL hasQueryRetrieveResponse;
@property (retain, nonatomic) NTPBCKQueryRetrieveResponse *queryRetrieveResponse;

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
