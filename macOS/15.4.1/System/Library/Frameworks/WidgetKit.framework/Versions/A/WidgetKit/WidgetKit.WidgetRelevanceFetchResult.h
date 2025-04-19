@interface WidgetKit.WidgetRelevanceFetchResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isDefaultImplementation;
    void /* unknown type, empty encoding */ widgetRelevances;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
