@interface WidgetKit.TimelineRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ widget;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ fileHandle;
    void /* unknown type, empty encoding */ archiveVersion;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
