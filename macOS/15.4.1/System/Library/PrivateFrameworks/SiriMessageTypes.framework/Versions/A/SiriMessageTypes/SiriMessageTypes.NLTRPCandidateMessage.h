@class NSString;

@interface SiriMessageTypes.NLTRPCandidateMessage : SiriMessageTypes.TRPCandidateRequestMessageBase {
    void /* unknown type, empty encoding */ tcuMappedNLResponse;
    void /* unknown type, empty encoding */ tcuMappedNLRepetitions;
    void /* unknown type, empty encoding */ selectedUserAttributes;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
