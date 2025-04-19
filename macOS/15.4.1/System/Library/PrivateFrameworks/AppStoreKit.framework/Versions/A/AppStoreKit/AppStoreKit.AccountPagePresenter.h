@interface AppStoreKit.AccountPagePresenter : AppStoreKit.BaseShelfPresenter {
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ pageTitle;
    void /* unknown type, empty encoding */ accountLinks;
    void /* unknown type, empty encoding */ headerButtons;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ appStateController;
    void /* unknown type, empty encoding */ purchaseHistory;
    void /* unknown type, empty encoding */ commerceAccountChangeNotifier;
    void /* unknown type, empty encoding */ appleSilicon;
    void /* unknown type, empty encoding */ purchasesPresenter;
    void /* unknown type, empty encoding */ familyMembers;
    void /* unknown type, empty encoding */ selectedFamilyMember;
    void /* unknown type, empty encoding */ familyMemberImages;
    void /* unknown type, empty encoding */ activeStoreAccount;
    void /* unknown type, empty encoding */ hasManagedAppleID;
    void /* unknown type, empty encoding */ localPlayer;
    void /* unknown type, empty encoding */ gameCenterFriendRequestCoordinator;
    void /* unknown type, empty encoding */ appAdoptionPresenter;
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ platformSwitcherLabels;
    void /* unknown type, empty encoding */ showMacOSCompatibleIOSApps;
}

- (void)accountsDidChange;

@end
