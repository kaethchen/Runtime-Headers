@class NSString;

@interface SIRINLUEXTERNALCDM_PLANNERCDMPlannerRequestIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) BOOL hasClientSessionId;
@property (retain, nonatomic) NSString *clientSessionId;
@property (readonly, nonatomic) BOOL hasClientRequestId;
@property (retain, nonatomic) NSString *clientRequestId;

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
