@class NSString, NSDictionary, ACAccount, NSNumber;

@interface AAiCloudTermsAgreeRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) BOOL preferPassword;
@property (retain, nonatomic) NSDictionary *additionalHeaders;
@property (retain, nonatomic) NSNumber *slaVersion;
@property (copy, nonatomic) NSString *serverInfo;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlRequest;
- (void)performRequestWithHandler:(id /* block */)a0;
- (id)initWithURLString:(id)a0 account:(id)a1;

@end
