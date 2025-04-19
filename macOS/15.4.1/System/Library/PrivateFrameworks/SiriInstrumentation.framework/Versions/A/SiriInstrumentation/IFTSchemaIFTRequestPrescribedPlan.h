@class IFTSchemaIFTRequestPrescribedPlanOpenSuccessValueFromLatestRequestTool, NSData, IFTSchemaIFTRequestPrescribedPlanTextTool, IFTSchemaIFTRequestPrescribedPlanSearchTool, IFTSchemaIFTRequestPrescribedPlanKnowledgeTool, IFTSchemaIFTRequestPrescribedPlanOpenTool, IFTSchemaIFTRequestPrescribedPlanConvertTool;

@interface IFTSchemaIFTRequestPrescribedPlan : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanSearchTool *searchTool;
@property (nonatomic) BOOL hasSearchTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanTextTool *textTool;
@property (nonatomic) BOOL hasTextTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanConvertTool *convertTool;
@property (nonatomic) BOOL hasConvertTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanKnowledgeTool *knowledgeTool;
@property (nonatomic) BOOL hasKnowledgeTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanOpenTool *openTool;
@property (nonatomic) BOOL hasOpenTool;
@property (retain, nonatomic) IFTSchemaIFTRequestPrescribedPlanOpenSuccessValueFromLatestRequestTool *openSuccessValueFromLatestRequestTool;
@property (nonatomic) BOOL hasOpenSuccessValueFromLatestRequestTool;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Requestprescribedplan;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteConvertTool;
- (void)deleteKnowledgeTool;
- (void)deleteOpenSuccessValueFromLatestRequestTool;
- (void)deleteOpenTool;
- (void)deleteSearchTool;
- (void)deleteTextTool;
- (id)suppressMessageUnderConditions;

@end
