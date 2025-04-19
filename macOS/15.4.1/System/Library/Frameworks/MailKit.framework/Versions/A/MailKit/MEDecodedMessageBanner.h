@class NSString;

@interface MEDecodedMessageBanner : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *primaryActionTitle;
@property (readonly, nonatomic, getter=isDismissable) BOOL dismissable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 primaryActionTitle:(id)a1 dismissable:(BOOL)a2;

@end
