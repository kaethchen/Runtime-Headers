@class NSMutableArray;

@interface MXRecognitionPhraseTokensAlternatives : PBCodable <NSCopying> {
    struct { unsigned char hasUnsuggestedAlternatives : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *tokPhrases;
@property (nonatomic) BOOL hasHasUnsuggestedAlternatives;
@property (nonatomic) BOOL hasUnsuggestedAlternatives;

+ (Class)tokPhrasesType;

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
- (void)clearTokPhrases;
- (unsigned long long)tokPhrasesCount;
- (void)addTokPhrases:(id)a0;
- (id)tokPhrasesAtIndex:(unsigned long long)a0;

@end
