@class NSString, NSData, NSDate, NSNumber;

@interface IDSKTState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *userID;
@property int registrationType;
@property int status;
@property (retain) NSData *ktAccountKey;
@property (retain) NSDate *ktAccountKeyTimestamp;
@property (retain) NSNumber *ktAccountKeyErrorCode;
@property (retain) NSData *deviceSignature;
@property (retain) NSData *ktDataForRegistration;
@property unsigned long long optedIn;
@property (retain) NSDate *ktOptInTimestamp;
@property (retain) NSNumber *ktOptInErrorCode;
@property (retain) NSString *dsid;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserID:(id)a0 registrationType:(int)a1 registrationStatus:(int)a2 ktAccountKey:(id)a3 accountKeyTimestamp:(id)a4 accountKeyErrorCode:(id)a5 deviceSignature:(id)a6 ktDataForRegistration:(id)a7 optedIn:(unsigned long long)a8 optedInTimestamp:(id)a9 optedInErrorCode:(id)a10 dsid:(id)a11;

@end
