@class NSString;

@interface SiriMessageTypes.NLResultCandidateMessageBase : SiriMessageTypes.UserIdAwareResultCandidateMessageBase {
    void /* unknown type, empty encoding */ userParses;
    void /* unknown type, empty encoding */ responseStatusCode;
    void /* unknown type, empty encoding */ fallbackParse;
    void /* unknown type, empty encoding */ languageVariantResult;
    void /* unknown type, empty encoding */ responseVariantResult;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
