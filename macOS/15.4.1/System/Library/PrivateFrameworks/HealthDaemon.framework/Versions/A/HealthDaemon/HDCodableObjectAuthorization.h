@class NSData, NSMutableArray;

@interface HDCodableObjectAuthorization : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasObjectUUID;
@property (retain, nonatomic) NSData *objectUUID;
@property (retain, nonatomic) NSMutableArray *authorizations;

+ (Class)authorizationsType;

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
- (void)addAuthorizations:(id)a0;
- (id)authorizationsAtIndex:(unsigned long long)a0;
- (unsigned long long)authorizationsCount;
- (void)clearAuthorizations;

@end
