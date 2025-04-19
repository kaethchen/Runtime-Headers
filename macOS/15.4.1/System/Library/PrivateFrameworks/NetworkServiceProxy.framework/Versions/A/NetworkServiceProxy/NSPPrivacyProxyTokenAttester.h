@class NSString, NSMutableArray;

@interface NSPPrivacyProxyTokenAttester : PBCodable <NSCopying> {
    struct { unsigned char authType : 1; } _has;
}

@property (nonatomic) BOOL hasAuthType;
@property (nonatomic) int authType;
@property (retain, nonatomic) NSString *attesterURL;
@property (retain, nonatomic) NSMutableArray *associatedIssuers;

+ (Class)associatedIssuersType;

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
- (int)StringAsAuthType:(id)a0;
- (void)addAssociatedIssuers:(id)a0;
- (id)associatedIssuersAtIndex:(unsigned long long)a0;
- (unsigned long long)associatedIssuersCount;
- (id)authTypeAsString:(int)a0;
- (void)clearAssociatedIssuers;

@end
