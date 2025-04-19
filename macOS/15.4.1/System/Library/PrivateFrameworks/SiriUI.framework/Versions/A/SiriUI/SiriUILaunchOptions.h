@interface SiriUILaunchOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) long long screenID;
@property (nonatomic) long long inputMode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
