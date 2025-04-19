@interface ICDeviceManagementRestrictionsManager : NSObject {
    void /* unknown type, empty encoding */ calculatorDomainID;
}

@property (class, nonatomic, readonly) ICDeviceManagementRestrictionsManager *sharedManager;

@property (nonatomic) void /* unknown type, empty encoding */ isMathPaperSolvingAllowed;
@property (nonatomic) void /* unknown type, empty encoding */ isKeyboardMathSolvingAllowed;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateRestrictions;
- (void)registerObserver;
- (void)profilePreferencesDidChangeWithNotification:(id)a0;

@end
