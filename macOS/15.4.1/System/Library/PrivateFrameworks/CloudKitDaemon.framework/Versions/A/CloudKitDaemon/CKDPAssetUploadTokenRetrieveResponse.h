@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *uploadTokens;
@property (readonly, nonatomic) BOOL hasAuthPutResponse;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders;

+ (Class)contentResponseHeadersType;
+ (Class)uploadTokensType;

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
- (void)addContentResponseHeaders:(id)a0;
- (void)addUploadTokens:(id)a0;
- (void)clearContentResponseHeaders;
- (void)clearUploadTokens;
- (id)contentResponseHeadersAtIndex:(unsigned long long)a0;
- (unsigned long long)contentResponseHeadersCount;
- (id)uploadTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)uploadTokensCount;

@end
