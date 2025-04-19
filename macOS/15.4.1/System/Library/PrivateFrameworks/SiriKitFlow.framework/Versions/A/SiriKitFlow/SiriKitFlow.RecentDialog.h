@interface SiriKitFlow.RecentDialog : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ addViews;
    void /* unknown type, empty encoding */ expiresAt;
    void /* unknown type, empty encoding */ requestId;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
