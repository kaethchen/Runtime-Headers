@class NSData;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadataCryptoSession : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasWrappedInvocationKey;
@property (retain, nonatomic) NSData *wrappedInvocationKey;
@property (readonly, nonatomic) BOOL hasRoutingToken;
@property (retain, nonatomic) NSData *routingToken;

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
