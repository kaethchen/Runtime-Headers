@interface WidgetKit.DescriptorFetchResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ widgetDescriptors;
    void /* unknown type, empty encoding */ controlDescriptors;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
