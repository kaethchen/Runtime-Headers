@class NSString;

@interface SiriInformationSearch.PommesResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ experiences;
    void /* unknown type, empty encoding */ clientResults;
    void /* unknown type, empty encoding */ conversationContext;
    void /* unknown type, empty encoding */ metadataDomainName;
    void /* unknown type, empty encoding */ metadataFallbackTriggered;
    void /* unknown type, empty encoding */ renderedTexts;
    void /* unknown type, empty encoding */ redactedRenderedTexts;
    void /* unknown type, empty encoding */ pegasusDomainFlowStepLog;
    void /* unknown type, empty encoding */ taskStepLogs;
    void /* unknown type, empty encoding */ pegasusDomainUserSensitiveTier1Log;
    void /* unknown type, empty encoding */ userSensitiveTier1Logs;
    void /* unknown type, empty encoding */ listenAfterSpeaking;
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ isHandledByPreflight;
    void /* unknown type, empty encoding */ preflightClientHandlerIdentifier;
    void /* unknown type, empty encoding */ requestCountryCode;
    void /* unknown type, empty encoding */ searchReason;
    void /* unknown type, empty encoding */ pommesCandidateId;
    void /* unknown type, empty encoding */ componentsWarmedUp;
    void /* unknown type, empty encoding */ isCachedResponse;
    void /* unknown type, empty encoding */ searchRequestUtterance;
    void /* unknown type, empty encoding */ sharedUserId;
    void /* unknown type, empty encoding */ encodedNLUserParses;
    void /* unknown type, empty encoding */ encodedNLFallbackParse;
    void /* unknown type, empty encoding */ asrRecognition;
    void /* unknown type, empty encoding */ responseVariantResult;
    void /* unknown type, empty encoding */ domainUseCases;
    void /* unknown type, empty encoding */ isLowConfidenceKnowledgeResult;
    void /* unknown type, empty encoding */ previousPommesContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$__computedPrimaryQueryConfidence;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
