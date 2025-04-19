@class NSNumber;

@interface APSigningAuthoritySettings : APSettings

@property (retain, nonatomic) NSNumber *failInitAttribute;
@property (retain, nonatomic) NSNumber *failSetHighPrivacyLevelForAttribute;
@property (retain, nonatomic) NSNumber *failSetStashingIsEnabled;
@property (retain, nonatomic) NSNumber *failCreateContext;
@property (retain, nonatomic) NSNumber *failContextInit;
@property (retain, nonatomic) NSNumber *failContextSetup;
@property (retain, nonatomic) NSNumber *failSigning;
@property (retain, nonatomic) NSNumber *maxContextsAllowed;
@property (retain, nonatomic) NSNumber *callbackDelay;
@property (retain, nonatomic) NSNumber *failContextServerInit;
@property (retain, nonatomic) NSNumber *contextServerInitDelay;
@property (retain, nonatomic) NSNumber *failContextServerSetup;
@property (retain, nonatomic) NSNumber *contextServerSetupDelay;
@property (retain, nonatomic) NSNumber *clearStashedContexts;

+ (id)storageWithDefaultValues:(id)a0;

@end
