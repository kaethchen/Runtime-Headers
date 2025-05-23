@class NSString;

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest {
    NSString *_token;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlString;
- (id)bodyDictionary;
- (id)initWithAccount:(id)a0 token:(id)a1;
- (id)initWithURLString:(id)a0 account:(id)a1 token:(id)a2;

@end
