@class NSDictionary;

@interface ATVHighSecurityAccountSendCode : AAAppleTVRequest {
    NSDictionary *_device;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;
- (id)initWithAccount:(id)a0 device:(id)a1;

@end
