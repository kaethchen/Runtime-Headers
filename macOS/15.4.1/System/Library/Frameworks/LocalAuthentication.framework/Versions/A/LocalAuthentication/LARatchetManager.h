@class NSString, LARatchetState, LACDTORatchetManager;

@interface LARatchetManager : NSObject <LACContextProviding> {
    LACDTORatchetManager *_coreManager;
}

@property (readonly, nonatomic) BOOL isFeatureEnabled;
@property (readonly, nonatomic) BOOL isFeatureSupported;
@property (readonly, nonatomic) BOOL isFeatureAvailable;
@property (readonly, nonatomic) BOOL isFeatureStrictModeEnabled;
@property (readonly, nonatomic) BOOL isSensorTrusted;
@property (readonly, nonatomic) LARatchetState *ratchetState;
@property (readonly, nonatomic) BOOL isRatchetFeatureEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (long long)_optionForRatchetOption:(long long)a0;
+ (id)optionsForRatchetArmOptions:(id)a0;
+ (id)ratchetErrorForError:(id)a0;
+ (id)ratchetResultForResult:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)reset;
- (id)createContext;
- (void)stateWithCompletion:(id /* block */)a0;
- (void)cancelArmRequestWithIdentifier:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)cancelCurrentRatchetWithReason:(id)a0 completion:(id /* block */)a1;
- (void)checkCanEnableFeatureWithCompletion:(id /* block */)a0;
- (void)currentRatchetWithCompletion:(id /* block */)a0;
- (void)disableFeatureStrictModeWithContext:(id)a0 completion:(id /* block */)a1;
- (void)disableFeatureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)enableFeatureActivatingGracePeriodWithReply:(id /* block */)a0;
- (void)enableFeatureStrictModeWithCompletion:(id /* block */)a0;
- (void)enableFeatureWithCompletion:(id /* block */)a0;
- (void)enableFeatureWithReply:(id /* block */)a0;
- (void)performArmRequestWithIdentifier:(id)a0 context:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)stateInContext:(id)a0 completion:(id /* block */)a1;

@end
