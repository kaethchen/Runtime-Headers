@interface NDFeedItemPool : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ underlyingType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
