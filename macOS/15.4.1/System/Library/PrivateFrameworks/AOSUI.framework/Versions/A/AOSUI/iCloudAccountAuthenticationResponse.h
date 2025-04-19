@class NSString, NSDictionary;

@interface iCloudAccountAuthenticationResponse : iCloudAccountResponse {
    NSDictionary *_tokens;
    NSDictionary *_appleAccount;
}

@property (readonly, nonatomic) NSString *fmfToken;
@property (readonly, nonatomic) NSString *fmfAppToken;
@property (readonly, nonatomic) NSString *fmipToken;
@property (readonly, nonatomic) NSString *authToken;
@property (readonly, nonatomic) NSString *mapsToken;
@property (readonly, nonatomic) NSString *hsaToken;
@property (readonly, nonatomic) NSString *cloudKitToken;
@property (readonly, nonatomic) NSString *fmipLostModeToken;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *HSAAction;
@property (readonly, nonatomic) NSString *HSAData;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
