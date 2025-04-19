@class NSData, NSNumber;

@interface LACGlobalDomain : NSObject <LACGlobalDomain, LACGlobalDomainDTO, LACGlobalDomainPreboard>

@property (class, nonatomic, copy) NSData *companionAuthentication;
@property (class, nonatomic, retain) NSNumber *isCompanionSessionActive;
@property (class, nonatomic) BOOL isCompanionDeviceMocked;
@property (class, nonatomic, retain) NSNumber *runningInBATS;
@property (class, nonatomic, retain) NSNumber *isSharedModeActive;
@property (class, nonatomic, retain) NSNumber *sharedModeLatency;
@property (class, nonatomic, readonly) BOOL osVariantAllowsDomainOverrides;

@property (nonatomic, retain) NSNumber *isDTOStrictModeEnabled;
@property (nonatomic, retain) NSNumber *preboardMode;

+ (id)sharedInstance;

@end
