@class NSString;

@interface SiriMessageTypes.MUXNLTRPCandidateMessage : SiriMessageTypes.TRPCandidateRequestMessageBase {
    void /* unknown type, empty encoding */ tcuMappedNLResponse;
    void /* unknown type, empty encoding */ tcuMappedNLRepetitions;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
