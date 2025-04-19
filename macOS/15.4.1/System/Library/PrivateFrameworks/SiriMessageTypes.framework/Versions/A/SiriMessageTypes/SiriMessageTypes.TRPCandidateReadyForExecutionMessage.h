@class NSString;

@interface SiriMessageTypes.TRPCandidateReadyForExecutionMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ trpId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
