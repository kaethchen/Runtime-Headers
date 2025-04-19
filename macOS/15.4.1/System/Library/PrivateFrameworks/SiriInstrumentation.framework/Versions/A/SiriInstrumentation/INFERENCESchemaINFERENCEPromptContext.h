@class INFERENCESchemaINFERENCEDisambiguationPromptContext, NSData, INFERENCESchemaINFERENCEConfirmationPromptContext;

@interface INFERENCESchemaINFERENCEPromptContext : SISchemaInstrumentationMessage {
    struct { unsigned char tag : 1; } _has;
}

@property (nonatomic) int tag;
@property (nonatomic) BOOL hasTag;
@property (retain, nonatomic) INFERENCESchemaINFERENCEConfirmationPromptContext *confirmationPromptContext;
@property (nonatomic) BOOL hasConfirmationPromptContext;
@property (retain, nonatomic) INFERENCESchemaINFERENCEDisambiguationPromptContext *disambiguationPromptContext;
@property (nonatomic) BOOL hasDisambiguationPromptContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPromptcontext;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfirmationPromptContext;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDisambiguationPromptContext;
- (void)deleteTag;
- (id)suppressMessageUnderConditions;

@end
