@interface AppleMediaServicesUI.ReviewLockupStyle : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ showPlaceholder;
    void /* unknown type, empty encoding */ shape;
    void /* unknown type, empty encoding */ font;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
