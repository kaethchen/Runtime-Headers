@class NSString, MailIntelligencePETContactEvents;

@interface MailIntelligencePETMailIntelligenceAnalysisEvent : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *collectionId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) int batch;
@property (retain, nonatomic) MailIntelligencePETContactEvents *contactEvents;
@property (nonatomic) unsigned long long mailIntelligenceUserId;

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
