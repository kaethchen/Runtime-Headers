@class NSString, NSArray, NSMutableData, NSDate;

@interface POLoginJWTBody : _POJWTBodyBase

@property (retain) NSMutableData *passwordData;
@property (readonly) NSString *aud;
@property (readonly) NSString *iss;
@property (readonly) NSString *sub;
@property (readonly) NSDate *iat;
@property (readonly) NSDate *exp;
@property (readonly) NSString *assertion;
@property (readonly) NSString *client_id;
@property (readonly) NSString *scope;
@property (readonly) NSString *nonce;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *grant_type;
@property (readonly) NSString *refresh_token;
@property (readonly) NSString *username;
@property (readonly) NSMutableData *password;
@property (readonly) NSArray *amr;

- (void)dealloc;
- (id)description;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)password;
- (id)scope;
- (id)dataRepresentation;
- (id)nonce;
- (id)username;
- (id)assertion;
- (id)exp;
- (id)sub;
- (id)client_id;
- (id)initWithJWTData:(id)a0;
- (id)iat;
- (id)amr;
- (id)aud;
- (id)iss;
- (id)grant_type;
- (id)refresh_token;
- (id)request_nonce;
- (void)zeroPassword;

@end
