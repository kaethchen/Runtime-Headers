@class NSString, NSArray, NSData;

@interface PNRProvisionalSagePnRMetadata : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *SessionId;
@property (nonatomic) BOOL hasSessionId;
@property (copy, nonatomic) NSString *clientId;
@property (nonatomic) BOOL hasClientId;
@property (copy, nonatomic) NSString *clientRequestId;
@property (nonatomic) BOOL hasClientRequestId;
@property (copy, nonatomic) NSString *clientSessionId;
@property (nonatomic) BOOL hasClientSessionId;
@property (copy, nonatomic) NSArray *planIds;
@property (copy, nonatomic) NSArray *actionIds;
@property (copy, nonatomic) NSString *requestStatus;
@property (nonatomic) BOOL hasRequestStatus;
@property (copy, nonatomic) NSString *rawSessionId;
@property (nonatomic) BOOL hasRawSessionId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSessionId;
- (void)deleteActionId;
- (void)deleteClientId;
- (void)deleteClientRequestId;
- (void)deleteClientSessionId;
- (void)deletePlanId;
- (void)deleteRawSessionId;
- (void)deleteRequestStatus;
- (id)actionIdAtIndex:(unsigned long long)a0;
- (unsigned long long)actionIdCount;
- (void)addActionId:(id)a0;
- (void)addPlanId:(id)a0;
- (void)clearActionId;
- (void)clearPlanId;
- (id)planIdAtIndex:(unsigned long long)a0;
- (unsigned long long)planIdCount;

@end
