@class ACAccount;

@interface AAAddEmailUIRequest : AARequest

@property (retain, nonatomic) ACAccount *account;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)urlString;
- (id)urlRequest;
- (id)initWithURLString:(id)a0 account:(id)a1;

@end
