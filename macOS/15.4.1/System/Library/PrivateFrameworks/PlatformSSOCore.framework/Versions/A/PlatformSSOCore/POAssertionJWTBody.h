@class NSMutableData, NSString, NSDate;

@interface POAssertionJWTBody : _POJWTBodyBase

@property (retain) NSMutableData *passwordData;
@property (readonly) NSString *aud;
@property (readonly) NSString *iss;
@property (readonly) NSString *sub;
@property (readonly) NSDate *iat;
@property (readonly) NSDate *exp;
@property (readonly) NSString *nonce;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *scope;
@property (readonly) NSMutableData *password;

- (void)dealloc;
- (id)description;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)password;
- (id)scope;
- (id)dataRepresentation;
- (id)nonce;
- (id)exp;
- (id)sub;
- (id)initWithJWTData:(id)a0;
- (id)iat;
- (id)aud;
- (id)iss;
- (id)request_nonce;
- (void)zeroPassword;

@end
