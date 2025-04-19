@class NSString;

@interface SiriMessageTypes.StoppedListeningForSpeechContinuationMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ lastTRPId;
    void /* unknown type, empty encoding */ mitigationDecision;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
