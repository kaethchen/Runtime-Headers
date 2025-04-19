@class NSString;

@interface AFCreditCard : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *number;
@property (copy, nonatomic) NSString *securityCode;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *suffix;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 number:(id)a1 expiration:(id)a2 securityCode:(id)a3 type:(id)a4 nickname:(id)a5 suffix:(id)a6;

@end
