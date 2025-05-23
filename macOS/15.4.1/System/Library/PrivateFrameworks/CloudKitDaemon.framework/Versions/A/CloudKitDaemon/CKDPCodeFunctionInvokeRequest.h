@class CKDPCodeFunctionInvokeRequestAttestationRequest, NSString, CKCDPTrustedTargetCryptoMetadata, NSData, CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata;

@interface CKDPCodeFunctionInvokeRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasFunctionName;
@property (retain, nonatomic) NSString *functionName;
@property (readonly, nonatomic) BOOL hasSerializedParameters;
@property (retain, nonatomic) NSData *serializedParameters;
@property (readonly, nonatomic) BOOL hasProtectedCloudComputeMetadata;
@property (retain, nonatomic) CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata;
@property (readonly, nonatomic) BOOL hasAttestationRequest;
@property (retain, nonatomic) CKDPCodeFunctionInvokeRequestAttestationRequest *attestationRequest;
@property (readonly, nonatomic) BOOL hasTrustedTargetCryptoMetadata;
@property (retain, nonatomic) CKCDPTrustedTargetCryptoMetadata *trustedTargetCryptoMetadata;

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
