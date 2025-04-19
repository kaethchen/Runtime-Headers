@class SIRINLUEXTERNALNLU_ROUTERApp;

@interface SIRINLUEXTERNALNLU_ROUTERPrimitiveValue : PBCodable <NSCopying> {
    struct { unsigned char boolValue : 1; } _has;
}

@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL hasApp;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERApp *app;

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
