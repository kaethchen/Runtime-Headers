@interface FaceTimeNotificationCore.AlertConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ showDummyUIKitView;
    void /* unknown type, empty encoding */ isAudio;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
