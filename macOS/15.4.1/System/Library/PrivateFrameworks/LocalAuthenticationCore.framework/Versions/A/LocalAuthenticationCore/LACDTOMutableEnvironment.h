@class LACDTOLostModeState, NSString, LACDTOBiometryWatchdogPack, LACDTOLocationState, LACDTORatchetState, LACDTOGracePeriodState;
@protocol LACDTOFeatureState;

@interface LACDTOMutableEnvironment : NSObject <LACDTOEnvironment>

@property (nonatomic, getter=isConfirmed) BOOL confirmed;
@property (retain, nonatomic) LACDTOBiometryWatchdogPack *biometryWatchdogPack;
@property (retain, nonatomic) id<LACDTOFeatureState> featureState;
@property (retain, nonatomic) LACDTOLocationState *locationState;
@property (retain, nonatomic) LACDTOLostModeState *lostModeState;
@property (retain, nonatomic) LACDTORatchetState *ratchetState;
@property (retain, nonatomic) LACDTOGracePeriodState *gracePeriodState;
@property (readonly, nonatomic) BOOL inFamiliarLocation;
@property (readonly, nonatomic) BOOL isDTOEnabled;
@property (readonly, nonatomic) BOOL hasExpiredBiometry;
@property (readonly, nonatomic) BOOL allowsAuthenticationFallbacks;
@property (readonly, nonatomic) BOOL allowsGracePeriodUI;
@property (readonly, nonatomic) BOOL isGracePeriodActive;
@property (readonly, nonatomic) BOOL isStrictModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullInstance;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isBiometryUsable;
- (BOOL)isDTOActive;

@end
