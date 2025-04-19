@interface FaceTimeNotificationCore.StartDraggingAction : FaceTimeNotificationCore.DownstreamAction {
    void /* unknown type, empty encoding */ frame;
    void /* unknown type, empty encoding */ position;
    void /* unknown type, empty encoding */ showingRTT;
    void /* unknown type, empty encoding */ showingKeypad;
    void /* unknown type, empty encoding */ keypadDialed;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
