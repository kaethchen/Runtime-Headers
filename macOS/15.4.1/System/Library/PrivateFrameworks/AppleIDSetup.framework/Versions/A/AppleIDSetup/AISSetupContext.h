@class NSString, NSSet, CUMessageSession, CBDevice, AISSetupContextCandidateAccount;

@interface AISSetupContext : NSObject

@property (copy, nonatomic) NSString *fixedPIN;
@property (copy, nonatomic) NSString *targetAuthTag;
@property (nonatomic) int pinType;
@property (nonatomic) unsigned long long deviceUserKind;
@property (nonatomic) BOOL shouldCreateDeviceUser;
@property (retain, nonatomic) NSSet *requiredServiceTypes;
@property (retain, nonatomic) NSSet *desiredServiceTypes;
@property (nonatomic) BOOL shouldBackgroundDesiredServices;
@property (retain, nonatomic) CUMessageSession *messageSessionTemplate;
@property (retain, nonatomic) CBDevice *bleDevice;
@property (nonatomic) unsigned long long localRole;
@property (nonatomic) unsigned long long remoteRole;
@property (nonatomic) BOOL shouldSkipConfirmation;
@property (retain, nonatomic) AISSetupContextCandidateAccount *candidateAccount;
@property (nonatomic) BOOL supportsSplitAccounts;
@property (nonatomic) BOOL isPreEstablishedClient;
@property (copy, nonatomic) NSString *serverDeviceModel;
@property (retain, nonatomic) NSString *localSecret;
@property (nonatomic) unsigned long long localSecretType;

- (id)init;
- (void).cxx_destruct;

@end
