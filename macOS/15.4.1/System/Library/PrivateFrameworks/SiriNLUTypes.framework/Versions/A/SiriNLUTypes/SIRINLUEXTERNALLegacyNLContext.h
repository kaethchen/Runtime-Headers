@class NSString, NSMutableArray;

@interface SIRINLUEXTERNALLegacyNLContext : PBCodable <NSCopying> {
    struct { unsigned char legacyContextSource : 1; unsigned char dictationPrompt : 1; unsigned char listenAfterSpeaking : 1; unsigned char strictPrompt : 1; } _has;
}

@property (nonatomic) BOOL hasDictationPrompt;
@property (nonatomic) BOOL dictationPrompt;
@property (nonatomic) BOOL hasStrictPrompt;
@property (nonatomic) BOOL strictPrompt;
@property (readonly, nonatomic) BOOL hasPreviousDomainName;
@property (retain, nonatomic) NSString *previousDomainName;
@property (nonatomic) BOOL hasListenAfterSpeaking;
@property (nonatomic) BOOL listenAfterSpeaking;
@property (retain, nonatomic) NSMutableArray *renderedTexts;
@property (nonatomic) BOOL hasLegacyContextSource;
@property (nonatomic) int legacyContextSource;
@property (retain, nonatomic) NSMutableArray *responseSemanticValues;

+ (Class)renderedTextsType;
+ (Class)responseSemanticValuesType;

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
- (void)addRenderedTexts:(id)a0;
- (void)clearRenderedTexts;
- (id)renderedTextsAtIndex:(unsigned long long)a0;
- (unsigned long long)renderedTextsCount;
- (int)StringAsLegacyContextSource:(id)a0;
- (void)addResponseSemanticValues:(id)a0;
- (void)clearResponseSemanticValues;
- (id)legacyContextSourceAsString:(int)a0;
- (id)responseSemanticValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)responseSemanticValuesCount;

@end
