@class NSString, NSData, SISchemaUUID;

@interface POMMESSchemaPOMMESClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char originProcess : 1; unsigned char searchToolGlobalSearchResultId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *pommesId;
@property (nonatomic) BOOL hasPommesId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (nonatomic) int originProcess;
@property (nonatomic) BOOL hasOriginProcess;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) BOOL hasSubRequestId;
@property (retain, nonatomic) SISchemaUUID *searchToolId;
@property (nonatomic) BOOL hasSearchToolId;
@property (nonatomic) int searchToolGlobalSearchResultId;
@property (nonatomic) BOOL hasSearchToolGlobalSearchResultId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteOriginProcess;
- (void)deletePommesId;
- (void)deleteResultCandidateId;
- (void)deleteSearchToolGlobalSearchResultId;
- (void)deleteSearchToolId;
- (void)deleteSubRequestId;
- (void)deleteTrpId;
- (id)suppressMessageUnderConditions;

@end
