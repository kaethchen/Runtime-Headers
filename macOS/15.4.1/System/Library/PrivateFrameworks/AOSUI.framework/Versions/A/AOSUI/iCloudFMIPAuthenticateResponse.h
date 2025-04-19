@class NSString, NSDictionary;

@interface iCloudFMIPAuthenticateResponse : iCloudAccountResponse {
    NSDictionary *_tokens;
    NSDictionary *_appleAccountInfo;
}

@property (readonly, nonatomic) NSString *fmipWipeToken;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
