@class NSString, PKPaymentPassAction;

@interface PKPaymentApplicationStateMessageOverride : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSString *body;
@property (readonly, retain, nonatomic) PKPaymentPassAction *action;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 privateBundle:(id)a2;

@end
