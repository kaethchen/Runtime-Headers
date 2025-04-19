@interface NewsDaemon.LiveActivityScheduleRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ liveActivityID;
    void /* unknown type, empty encoding */ options;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
