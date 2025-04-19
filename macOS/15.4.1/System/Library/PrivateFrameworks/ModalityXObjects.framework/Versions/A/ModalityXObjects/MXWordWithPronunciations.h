@class NSString, NSMutableArray;

@interface MXWordWithPronunciations : PBCodable <NSCopying> {
    struct { unsigned char frequency : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOrthography;
@property (retain, nonatomic) NSString *orthography;
@property (retain, nonatomic) NSMutableArray *pronunciations;
@property (nonatomic) BOOL hasFrequency;
@property (nonatomic) int frequency;
@property (readonly, nonatomic) BOOL hasTag;
@property (retain, nonatomic) NSString *tag;

+ (Class)pronunciationsType;

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
- (void)addPronunciations:(id)a0;
- (void)clearPronunciations;
- (id)pronunciationsAtIndex:(unsigned long long)a0;
- (unsigned long long)pronunciationsCount;

@end
