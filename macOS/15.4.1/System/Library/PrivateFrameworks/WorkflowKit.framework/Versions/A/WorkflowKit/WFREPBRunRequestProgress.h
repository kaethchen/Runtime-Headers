@class NSString;

@interface WFREPBRunRequestProgress : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *runRequestIdentifier;
@property (nonatomic) double progress;

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
