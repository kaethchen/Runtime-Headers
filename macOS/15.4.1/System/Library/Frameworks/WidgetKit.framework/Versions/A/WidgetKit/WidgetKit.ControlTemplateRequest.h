@interface WidgetKit.ControlTemplateRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ fileHandle;
    void /* unknown type, empty encoding */ control;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ isPreview;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
