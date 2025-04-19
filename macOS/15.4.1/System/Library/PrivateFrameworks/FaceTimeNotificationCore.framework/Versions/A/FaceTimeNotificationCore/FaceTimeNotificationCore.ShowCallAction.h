@interface FaceTimeNotificationCore.ShowCallAction : FaceTimeNotificationCore.UpstreamAction {
    void /* unknown type, empty encoding */ call;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
