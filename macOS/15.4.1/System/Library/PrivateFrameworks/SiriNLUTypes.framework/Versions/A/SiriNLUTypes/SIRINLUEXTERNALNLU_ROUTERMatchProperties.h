@class SIRINLUEXTERNALNLU_ROUTERAliasTypes;

@interface SIRINLUEXTERNALNLU_ROUTERMatchProperties : PBCodable <NSCopying> {
    struct { unsigned char matchedTokenCount : 1; unsigned char maxTokenCount : 1; } _has;
}

@property (nonatomic) BOOL hasMaxTokenCount;
@property (nonatomic) long long maxTokenCount;
@property (nonatomic) BOOL hasMatchedTokenCount;
@property (nonatomic) long long matchedTokenCount;
@property (readonly, nonatomic) BOOL hasMatchedAliasTypes;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERAliasTypes *matchedAliasTypes;

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
