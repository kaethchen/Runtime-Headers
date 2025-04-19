@interface WidgetKit.ModifyControlStateRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ control;
    void /* unknown type, empty encoding */ state;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
