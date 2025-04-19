@class NSData;

@interface CTSubscriberAuthResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *auts;
@property (retain, nonatomic) NSData *res;
@property (retain, nonatomic) NSData *sres;
@property (retain, nonatomic) NSData *kc;
@property (retain, nonatomic) NSData *ck;
@property (retain, nonatomic) NSData *ik;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
