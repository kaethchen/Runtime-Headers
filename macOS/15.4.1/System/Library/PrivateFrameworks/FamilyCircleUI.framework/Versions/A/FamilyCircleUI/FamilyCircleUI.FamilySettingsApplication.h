@interface FamilyCircleUI.FamilySettingsApplication : NSObject <AIDAAccountManagerDelegate> {
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ aidaAccountManager;
    void /* unknown type, empty encoding */ familyCircleStore;
    void /* unknown type, empty encoding */ servicesStore;
    void /* unknown type, empty encoding */ checklistRankingConfigStore;
    void /* unknown type, empty encoding */ navigationPathSubject;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ servicesOwnerManager;
    void /* unknown type, empty encoding */ launchDate;
}

- (id)init;
- (void).cxx_destruct;
- (id)accountsForAccountManager:(id)a0;
- (void)appMovedToBackground;
- (void)appMovedToForeground;

@end
