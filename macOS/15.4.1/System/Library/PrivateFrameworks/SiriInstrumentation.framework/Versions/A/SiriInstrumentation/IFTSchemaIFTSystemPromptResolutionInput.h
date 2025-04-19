@class IFTSchemaIFTRequestContentTouchContent, IFTSchemaIFTRequestContentHeadGestureContent, IFTSchemaIFTRequestContentTextContent, NSData, IFTSchemaIFTRequestContentSpeechContent;

@interface IFTSchemaIFTSystemPromptResolutionInput : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTRequestContentTouchContent *touch;
@property (nonatomic) BOOL hasTouch;
@property (retain, nonatomic) IFTSchemaIFTRequestContentHeadGestureContent *headGesture;
@property (nonatomic) BOOL hasHeadGesture;
@property (retain, nonatomic) IFTSchemaIFTRequestContentTextContent *text;
@property (nonatomic) BOOL hasText;
@property (retain, nonatomic) IFTSchemaIFTRequestContentSpeechContent *speech;
@property (nonatomic) BOOL hasSpeech;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Systempromptresolutioninput;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteText;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteHeadGesture;
- (void)deleteSpeech;
- (void)deleteTouch;
- (id)suppressMessageUnderConditions;

@end
