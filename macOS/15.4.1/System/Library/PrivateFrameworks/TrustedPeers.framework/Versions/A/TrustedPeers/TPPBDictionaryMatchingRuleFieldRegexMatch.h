@class NSString;

@interface TPPBDictionaryMatchingRuleFieldRegexMatch : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) BOOL hasRegex;
@property (retain, nonatomic) NSString *regex;

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
- (BOOL)matches:(id)a0 error:(id *)a1;

@end
