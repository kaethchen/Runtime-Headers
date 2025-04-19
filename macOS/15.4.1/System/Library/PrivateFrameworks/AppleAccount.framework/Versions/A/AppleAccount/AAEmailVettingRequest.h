@class ACAccount;

@interface AAEmailVettingRequest : AARequest

@property (retain, nonatomic) ACAccount *account;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)urlRequest;
- (id)initWithURLString:(id)a0 account:(id)a1;

@end
