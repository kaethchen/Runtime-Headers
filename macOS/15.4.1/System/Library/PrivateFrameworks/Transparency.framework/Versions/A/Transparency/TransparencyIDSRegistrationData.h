@class NSString, NSData, NSDate, NSError;

@interface TransparencyIDSRegistrationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *application;
@property (retain) NSData *tbsKTIDSRegistrationData;
@property (retain) NSData *signature;
@property (retain) NSData *publicKey;
@property (retain) NSData *pushToken;
@property (retain) NSDate *orderedTimestamp;
@property (retain) NSString *state;
@property (retain) NSError *error;
@property (retain) NSDate *createdAt;
@property (retain) NSDate *signedAt;
@property (retain) NSDate *nextRetryAt;
@property (retain) NSString *altDSID;
@property (retain) NSString *dsid;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)diagnosticsJsonDictionary;
- (id)humanDiagnosticsString;
- (id)initWithApplication:(id)a0 registrationData:(id)a1;

@end
