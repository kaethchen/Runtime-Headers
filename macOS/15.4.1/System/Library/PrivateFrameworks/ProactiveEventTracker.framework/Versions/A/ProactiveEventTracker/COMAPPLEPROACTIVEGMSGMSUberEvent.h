@class COMAPPLEPROACTIVEGMSGMSInferenceEvent, NSString, COMAPPLEPROACTIVEGMSGMSAssetEvent, COMAPPLEPROACTIVEGMSGMSGenerativeFunctionEvent, COMAPPLEPROACTIVEGMSGMSError, COMAPPLEPROACTIVEGMSGMSPrewarmEvent;

@interface COMAPPLEPROACTIVEGMSGMSUberEvent : PBCodable <NSCopying> {
    struct { unsigned char threadQualityOfService : 1; unsigned char version : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (readonly, nonatomic) BOOL hasTestKey;
@property (retain, nonatomic) NSString *testKey;
@property (readonly, nonatomic) BOOL hasBootSessionUUID;
@property (retain, nonatomic) NSString *bootSessionUUID;
@property (readonly, nonatomic) BOOL hasModelManagerRequestIdentifier;
@property (retain, nonatomic) NSString *modelManagerRequestIdentifier;
@property (readonly, nonatomic) BOOL hasModelManagerSessionIdentifier;
@property (retain, nonatomic) NSString *modelManagerSessionIdentifier;
@property (readonly, nonatomic) BOOL hasInferenceProviderIdentifier;
@property (retain, nonatomic) NSString *inferenceProviderIdentifier;
@property (readonly, nonatomic) BOOL hasUseCaseIdentifier;
@property (retain, nonatomic) NSString *useCaseIdentifier;
@property (readonly, nonatomic) BOOL hasCatalogResourceIdentifier;
@property (retain, nonatomic) NSString *catalogResourceIdentifier;
@property (readonly, nonatomic) BOOL hasClientRequestIdentifier;
@property (retain, nonatomic) NSString *clientRequestIdentifier;
@property (readonly, nonatomic) BOOL hasClientSessionIdentifier;
@property (retain, nonatomic) NSString *clientSessionIdentifier;
@property (nonatomic) BOOL hasThreadQualityOfService;
@property (nonatomic) long long threadQualityOfService;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasInferenceEvent;
@property (retain, nonatomic) COMAPPLEPROACTIVEGMSGMSInferenceEvent *inferenceEvent;
@property (readonly, nonatomic) BOOL hasAssetEvent;
@property (retain, nonatomic) COMAPPLEPROACTIVEGMSGMSAssetEvent *assetEvent;
@property (readonly, nonatomic) BOOL hasGenerativeFunctionEvent;
@property (retain, nonatomic) COMAPPLEPROACTIVEGMSGMSGenerativeFunctionEvent *generativeFunctionEvent;
@property (readonly, nonatomic) BOOL hasPrewarmEvent;
@property (retain, nonatomic) COMAPPLEPROACTIVEGMSGMSPrewarmEvent *prewarmEvent;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) COMAPPLEPROACTIVEGMSGMSError *error;

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
- (int)StringAsEventType:(id)a0;
- (id)eventTypeAsString:(int)a0;

@end
