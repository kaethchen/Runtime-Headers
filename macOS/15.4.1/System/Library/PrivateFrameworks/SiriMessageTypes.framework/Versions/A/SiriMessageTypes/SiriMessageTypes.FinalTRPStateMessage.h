@class NSString;

@interface SiriMessageTypes.FinalTRPStateMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ trpCandidateId;
    void /* unknown type, empty encoding */ routingDecision;
    void /* unknown type, empty encoding */ mitigationDecision;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
