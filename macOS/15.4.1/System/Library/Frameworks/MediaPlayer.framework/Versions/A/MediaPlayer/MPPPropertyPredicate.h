@class NSString, MPPMediaPredicateValue;

@interface MPPPropertyPredicate : PBCodable <NSCopying> {
    struct { unsigned char comparisonType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasProperty;
@property (retain, nonatomic) NSString *property;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) MPPMediaPredicateValue *value;
@property (nonatomic) BOOL hasComparisonType;
@property (nonatomic) int comparisonType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
