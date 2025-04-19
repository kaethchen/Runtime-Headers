@interface COMAPPLEPROACTIVEGMSGMSInferenceEvent : PBCodable <NSCopying> {
    struct { unsigned char assetLoadAndTtftCombinedMillis : 1; unsigned char extendInferenceMillis : 1; unsigned char inferenceTimeMillis : 1; unsigned char inputTokensCount : 1; unsigned char outputTokensCount : 1; unsigned char sdDraftModelInferenceCallCount : 1; unsigned char sdDraftModelTotalLatencyMillis : 1; unsigned char sdDraftOutputTokensCount : 1; unsigned char sdDraftTokenAcceptanceRate : 1; unsigned char sdSpeculationSuccessRate : 1; unsigned char sdTargetModelInferenceCallCount : 1; unsigned char sdTargetModelTotalLatencyMillis : 1; unsigned char sdTinyModelInferenceCallCount : 1; unsigned char sdTinyModelTotalLatencyMillis : 1; unsigned char sdTinyTokenAcceptanceRate : 1; unsigned char sdTotalOutputTokensCount : 1; unsigned char timeToFirstTokenMillis : 1; unsigned char tokensPerSecond : 1; unsigned char totalLatencyMillis : 1; unsigned char version : 1; unsigned char requestType : 1; } _has;
}

@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasInputTokensCount;
@property (nonatomic) long long inputTokensCount;
@property (nonatomic) BOOL hasOutputTokensCount;
@property (nonatomic) long long outputTokensCount;
@property (nonatomic) BOOL hasTotalLatencyMillis;
@property (nonatomic) double totalLatencyMillis;
@property (nonatomic) BOOL hasTimeToFirstTokenMillis;
@property (nonatomic) double timeToFirstTokenMillis;
@property (nonatomic) BOOL hasTokensPerSecond;
@property (nonatomic) double tokensPerSecond;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasInferenceTimeMillis;
@property (nonatomic) double inferenceTimeMillis;
@property (nonatomic) BOOL hasExtendInferenceMillis;
@property (nonatomic) double extendInferenceMillis;
@property (nonatomic) BOOL hasAssetLoadAndTtftCombinedMillis;
@property (nonatomic) double assetLoadAndTtftCombinedMillis;
@property (nonatomic) BOOL hasSdTinyModelInferenceCallCount;
@property (nonatomic) long long sdTinyModelInferenceCallCount;
@property (nonatomic) BOOL hasSdDraftModelInferenceCallCount;
@property (nonatomic) long long sdDraftModelInferenceCallCount;
@property (nonatomic) BOOL hasSdTargetModelInferenceCallCount;
@property (nonatomic) long long sdTargetModelInferenceCallCount;
@property (nonatomic) BOOL hasSdDraftTokenAcceptanceRate;
@property (nonatomic) double sdDraftTokenAcceptanceRate;
@property (nonatomic) BOOL hasSdTinyTokenAcceptanceRate;
@property (nonatomic) double sdTinyTokenAcceptanceRate;
@property (nonatomic) BOOL hasSdSpeculationSuccessRate;
@property (nonatomic) double sdSpeculationSuccessRate;
@property (nonatomic) BOOL hasSdDraftOutputTokensCount;
@property (nonatomic) long long sdDraftOutputTokensCount;
@property (nonatomic) BOOL hasSdTotalOutputTokensCount;
@property (nonatomic) long long sdTotalOutputTokensCount;
@property (nonatomic) BOOL hasSdTinyModelTotalLatencyMillis;
@property (nonatomic) double sdTinyModelTotalLatencyMillis;
@property (nonatomic) BOOL hasSdDraftModelTotalLatencyMillis;
@property (nonatomic) double sdDraftModelTotalLatencyMillis;
@property (nonatomic) BOOL hasSdTargetModelTotalLatencyMillis;
@property (nonatomic) double sdTargetModelTotalLatencyMillis;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRequestType:(id)a0;
- (id)requestTypeAsString:(int)a0;

@end
