@class NSString, NSArray, NSDictionary, NSDate, NSData, NSMutableDictionary;

@interface CPProvisioningProfile : NSObject <NSSecureCoding> {
    NSMutableDictionary *fProfileDict;
    BOOL fVerificationStateCalculated;
    int fVerificationState;
    unsigned long long fIndexOfFailedVerificationSigner;
    NSString *fSignerName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSString *appName;
@property (readonly, retain, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL hasExpired;
@property (readonly, retain, nonatomic) NSDate *creationDate;
@property (readonly, retain, nonatomic) NSArray *provisionedDevices;
@property (readonly, nonatomic) BOOL provisionedForAllDevices;
@property (readonly, retain, nonatomic) NSDictionary *entitlements;
@property (readonly, retain, nonatomic) NSArray *teamIdentifier;
@property (readonly, retain, nonatomic) NSString *teamName;
@property (readonly, retain, nonatomic) NSArray *developerCertificates;
@property (readonly, retain, nonatomic) NSString *uuid;
@property (readonly, retain, nonatomic) NSString *applicationID;
@property (readonly, retain, nonatomic) NSDate *installationDate;
@property (readonly, retain, nonatomic) NSDate *receiveDate;
@property (readonly, nonatomic) int verificationState;
@property (readonly, retain, nonatomic) NSString *signerName;
@property (readonly, retain, nonatomic) NSArray *signerCertificatesInfo;
@property (readonly, retain, nonatomic) NSData *firstInvalidSignerCertificateData;
@property (readonly, retain, nonatomic) NSArray *cdHashes;

+ (id)profileFromDict:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)userData;
- (id)settings;
- (id)userDataForKey:(id)a0;
- (id)initFromDict:(id)a0;
- (id)profileDict;
- (void)setUserData:(id)a0 forKey:(id)a1;

@end
