@class SIRINLUINTERNALSiriVocabularySpanData, SIRINLUINTERNALOvertonKGSpanData, SIRINLUINTERNALMentionResolverSpanData, SIRINLUINTERNALPLUMSpanData, SIRINLUINTERNALMentionDetectorSpanData;

@interface SIRINLUINTERNALInternalSpanData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSiriVocabularySpanData;
@property (retain, nonatomic) SIRINLUINTERNALSiriVocabularySpanData *siriVocabularySpanData;
@property (readonly, nonatomic) BOOL hasPlumSpanData;
@property (retain, nonatomic) SIRINLUINTERNALPLUMSpanData *plumSpanData;
@property (readonly, nonatomic) BOOL hasOvertonKgSpanData;
@property (retain, nonatomic) SIRINLUINTERNALOvertonKGSpanData *overtonKgSpanData;
@property (readonly, nonatomic) BOOL hasMentionDetectorSpanData;
@property (retain, nonatomic) SIRINLUINTERNALMentionDetectorSpanData *mentionDetectorSpanData;
@property (readonly, nonatomic) BOOL hasMentionResolverSpanData;
@property (retain, nonatomic) SIRINLUINTERNALMentionResolverSpanData *mentionResolverSpanData;

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
