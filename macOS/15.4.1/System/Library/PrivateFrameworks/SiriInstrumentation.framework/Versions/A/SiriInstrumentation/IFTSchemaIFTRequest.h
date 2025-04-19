@class NSData, IFTSchemaIFTRequestPrescribedPlan, IFTSchemaIFTRequestContent;

@interface IFTSchemaIFTRequest : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char isSafetyMode : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) IFTSchemaIFTRequestContent *content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL isSafetyMode;
@property (nonatomic) BOOL hasIsSafetyMode;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlan *prescribedPlan;
@property (nonatomic) BOOL hasPrescribedPlan;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteContent;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteExists;
- (void)deleteIsSafetyMode;
- (void)deletePrescribedPlan;
- (id)suppressMessageUnderConditions;

@end
