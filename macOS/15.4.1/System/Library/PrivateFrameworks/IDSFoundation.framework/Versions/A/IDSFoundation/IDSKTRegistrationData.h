@class NSString, NSData, NSDate, NSNumber;

@interface IDSKTRegistrationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *ktDataForRegistration;
@property (retain, nonatomic) NSData *ktPublicAccountKey;
@property (retain, nonatomic) NSData *ktDataSignature;
@property (retain, nonatomic) NSDate *registeredTime;
@property (nonatomic) BOOL uploadedToKVS;
@property (retain, nonatomic) NSDate *ktAccountKeyTimestamp;
@property (retain, nonatomic) NSDate *ktOptInTimestamp;
@property (nonatomic) unsigned long long ktOptInStatus;
@property (retain, nonatomic) NSNumber *ktAccountKeyErrorCode;
@property (retain, nonatomic) NSNumber *ktOptInErrorCode;
@property (retain, nonatomic) NSString *dsid;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (BOOL)needsKVSUpload;

@end
