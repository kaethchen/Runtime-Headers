@class SIRINLUEXTERNALUsoGraph, SIRINLUEXTERNALRRGroupIdentifier, SIRICOMMONStringValue, SIRICOMMONDoubleValue, NSMutableArray, SIRINLUEXTERNALRRMetadata;

@interface SIRINLUEXTERNALEntityCandidate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEntity;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *entity;
@property (readonly, nonatomic) BOOL hasScore;
@property (retain, nonatomic) SIRICOMMONDoubleValue *score;
@property (readonly, nonatomic) BOOL hasEntityId;
@property (retain, nonatomic) SIRICOMMONStringValue *entityId;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (retain, nonatomic) SIRICOMMONStringValue *appBundleId;
@property (readonly, nonatomic) BOOL hasGroupId;
@property (retain, nonatomic) SIRINLUEXTERNALRRGroupIdentifier *groupId;
@property (retain, nonatomic) NSMutableArray *annotations;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) SIRINLUEXTERNALRRMetadata *metadata;

+ (Class)annotationsType;

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
- (void)addAnnotations:(id)a0;
- (id)annotationsAtIndex:(unsigned long long)a0;
- (unsigned long long)annotationsCount;
- (void)clearAnnotations;

@end
