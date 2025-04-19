@class NSString;

@interface iCloudFMIPAuthenticateRequest : NSObject {
    NSString *_accountID;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)urlRequestWithPassword:(id)a0;

@end
