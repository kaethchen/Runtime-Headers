@class NSMutableArray;

@interface MXSetAlternateRecognitionSausage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *positionalTokPhraseAlts;

+ (Class)positionalTokPhraseAltType;

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
- (void)addPositionalTokPhraseAlt:(id)a0;
- (void)clearPositionalTokPhraseAlts;
- (id)positionalTokPhraseAltAtIndex:(unsigned long long)a0;
- (unsigned long long)positionalTokPhraseAltsCount;

@end
