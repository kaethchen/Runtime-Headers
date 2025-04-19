@class NSString, NSArray, NSNumber, FBKSCustomBehavior;

@interface FBKSUserLoginInfo : NSObject

@property (retain, nonatomic) NSString *deviceToken;
@property (retain, nonatomic) NSNumber *participantID;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *givenName;
@property (retain, nonatomic) NSString *familyName;
@property (retain, nonatomic) FBKSCustomBehavior *behavior;
@property (retain, nonatomic) NSArray *pendingConsents;
@property (nonatomic) BOOL isAppleConnectLogin;
@property (nonatomic) BOOL isSystemAccount;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)saveDeviceTokenLookupInformation;

@end
