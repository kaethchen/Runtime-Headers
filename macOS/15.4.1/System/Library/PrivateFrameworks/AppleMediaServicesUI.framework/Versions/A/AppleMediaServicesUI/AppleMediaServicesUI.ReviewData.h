@interface AppleMediaServicesUI.ReviewData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ body;
    void /* unknown type, empty encoding */ nickname;
    void /* unknown type, empty encoding */ rating;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
