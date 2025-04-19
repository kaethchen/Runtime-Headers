@interface AppStoreKit.AppOfferButtonPresenter : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ buttonAction;
    void /* unknown type, empty encoding */ offerDisplayProperties;
    void /* unknown type, empty encoding */ appStoreInstallStateMonitor;
    void /* unknown type, empty encoding */ restrictions;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ alignment;
    void /* unknown type, empty encoding */ subtitlePosition;
    void /* unknown type, empty encoding */ hasCompactRedownloads;
    void /* unknown type, empty encoding */ includeBetaApps;
    void /* unknown type, empty encoding */ isBeingConfirmed;
    void /* unknown type, empty encoding */ arePreordersCancellable;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ appCapabilitiesDidChangeToken;
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ previousState;
    void /* unknown type, empty encoding */ hasParentBeenPurchased;
}

- (void)isEnabledDidChange:(id)a0;
- (void)offerButtonTapped;
- (void)rightClickButtonClicked:(id)a0;

@end
