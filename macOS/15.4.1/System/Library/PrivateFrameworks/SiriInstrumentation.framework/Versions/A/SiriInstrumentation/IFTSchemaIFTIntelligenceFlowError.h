@class NSString, NSData;

@interface IFTSchemaIFTIntelligenceFlowError : SISchemaInstrumentationMessage {
    struct { unsigned char code : 1; } _has;
}

@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) long long code;
@property (nonatomic) BOOL hasCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCode;
- (void)deleteDomain;
- (id)suppressMessageUnderConditions;

@end
