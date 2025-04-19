@interface ICCalculateAccessibilityController : NSObject {
    void /* unknown type, empty encoding */ isVoiceOverEnabledObservation;
    void /* unknown type, empty encoding */ isSwitchControlEnabledObservation;
    void /* unknown type, empty encoding */ lastAnnouncement;
    void /* unknown type, empty encoding */ hasInitializedStateCache;
    void /* unknown type, empty encoding */ stateErrorsCache;
    void /* unknown type, empty encoding */ stateResultsCache;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ note;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNote:(id)a0;
- (id)getValueForPencilKitAttachmentAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
