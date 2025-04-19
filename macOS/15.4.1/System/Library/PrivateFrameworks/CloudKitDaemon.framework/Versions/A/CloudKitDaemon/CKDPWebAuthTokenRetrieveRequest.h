@class NSString;

@interface CKDPWebAuthTokenRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char forceFetchToken : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasApiToken;
@property (retain, nonatomic) NSString *apiToken;
@property (nonatomic) BOOL hasForceFetchToken;
@property (nonatomic) BOOL forceFetchToken;

+ (id)options;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
