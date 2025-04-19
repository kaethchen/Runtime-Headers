@class NSString;

@interface SiriMessageTypes.MultiUserTRPCandidateRequestMessageBase : SiriMessageTypes.TRPCandidateRequestMessageBase {
    void /* unknown type, empty encoding */ userIdToTRPCandidateDict;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
