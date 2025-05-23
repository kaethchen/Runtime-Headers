@class NSString;

@interface CPLSuggestionPerson : PBCodable <NSCopying> {
    struct { unsigned char feature : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPersonIdentifier;
@property (retain, nonatomic) NSString *personIdentifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL hasFeature;
@property (nonatomic) unsigned int feature;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) NSString *context;

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
