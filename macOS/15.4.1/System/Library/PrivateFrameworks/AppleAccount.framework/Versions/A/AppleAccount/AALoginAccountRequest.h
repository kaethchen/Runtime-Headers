@class NSString, ACAccount, NSDictionary;

@interface AALoginAccountRequest : AARequest {
    ACAccount *_account;
    NSDictionary *_delegatesInfo;
}

@property (copy, nonatomic) NSString *serverInfo;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;
- (id)initWithAccount:(id)a0 delegates:(id)a1;

@end
