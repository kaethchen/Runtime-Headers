@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MDMCloudConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSDictionary *memberQueueDetails;
@property (retain, nonatomic) NSDictionary *memberQueueSetAsideDetails;
@property (nonatomic) BOOL isSingleton;
@property (copy, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSDictionary *setAsideDetails;

+ (id)sharedConfiguration;
+ (BOOL)isProvisionallyEnrolledWithCloudConfig:(id)a0;
+ (id)_provisionalEnrollmentExpirationDateFromCloudConfig:(id)a0;
+ (id)canonicalConfigurationWithSupervision:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)language;
- (id)region;
- (int)userMode;
- (BOOL)isAwaitingConfiguration;
- (BOOL)isSupervised;
- (BOOL)isStoredProfileInstalled;
- (BOOL)isTeslaEnrolled;
- (BOOL)isProvisionallyEnrolled;
- (id)MAIDUsername;
- (BOOL)alreadySignedIntoFaceTime;
- (id)diagnosticsUploadURL;
- (id)enrollmentAnchorCertificates;
- (id)enrollmentServerInfo;
- (id)enrollmentServerSupportedFeatures;
- (id)enrollmentServerURL;
- (BOOL)hasMAIDCredential;
- (id)initWithCloudConfigDetails:(id)a0;
- (BOOL)isMDMUnremovable;
- (BOOL)isRapidReturnToService;
- (id)languageScript;
- (id)lastDEPPushTokenHash;
- (id)mdmServerUID;
- (id)mdmVersionProtocol;
- (id)provisionalEnrollmentExpirationDate;
- (void)refreshDetailsFromDisk;
- (id)skipSetupKeys;
- (id)tvProviderUserToken;

@end
