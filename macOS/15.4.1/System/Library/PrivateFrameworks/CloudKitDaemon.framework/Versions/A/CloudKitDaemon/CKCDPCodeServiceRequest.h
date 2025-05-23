@class NSData, NSString, CKCDPCodeServiceRequestRequestContext, CKCDPCodeServiceRequestAuthInformation, CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions, CKCDPCodeServiceRequestAttestationRequest, CKCDPTrustedTargetCryptoMetadata, NSMutableArray, CKCDPCodeServiceRequestAccountConfig, CKCDPCodeServiceRequestProtectedCloudComputeMetadata;

@interface CKCDPCodeServiceRequest : PBRequest <NSCopying> {
    struct { unsigned char dataProtection : 1; unsigned char serializationFormat : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasFunctionName;
@property (retain, nonatomic) NSString *functionName;
@property (readonly, nonatomic) BOOL hasSerializedParameters;
@property (retain, nonatomic) NSData *serializedParameters;
@property (nonatomic) BOOL hasSerializationFormat;
@property (nonatomic) int serializationFormat;
@property (retain, nonatomic) NSMutableArray *clientConfigs;
@property (readonly, nonatomic) BOOL hasAccountConfig;
@property (retain, nonatomic) CKCDPCodeServiceRequestAccountConfig *accountConfig;
@property (readonly, nonatomic) BOOL hasRequestContext;
@property (retain, nonatomic) CKCDPCodeServiceRequestRequestContext *requestContext;
@property (readonly, nonatomic) BOOL hasAssetAuthorizeGetRequestOptions;
@property (retain, nonatomic) CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *assetAuthorizeGetRequestOptions;
@property (readonly, nonatomic) BOOL hasAttestationRequest;
@property (retain, nonatomic) CKCDPCodeServiceRequestAttestationRequest *attestationRequest;
@property (readonly, nonatomic) BOOL hasAuthInformation;
@property (retain, nonatomic) CKCDPCodeServiceRequestAuthInformation *authInformation;
@property (readonly, nonatomic) BOOL hasProtectedCloudComputeMetadata;
@property (retain, nonatomic) CKCDPCodeServiceRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata;
@property (readonly, nonatomic) BOOL hasTrustedTargetCryptoMetadata;
@property (retain, nonatomic) CKCDPTrustedTargetCryptoMetadata *trustedTargetCryptoMetadata;
@property (nonatomic) BOOL hasDataProtection;
@property (nonatomic) int dataProtection;

+ (Class)clientConfigType;

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
- (void)addClientConfig:(id)a0;
- (void)clearClientConfigs;
- (id)clientConfigAtIndex:(unsigned long long)a0;
- (unsigned long long)clientConfigsCount;
- (int)StringAsSerializationFormat:(id)a0;
- (int)StringAsDataProtection:(id)a0;
- (void)clearOneofValuesForDataProtection;
- (id)dataProtectionAsString:(int)a0;
- (id)serializationFormatAsString:(int)a0;

@end
