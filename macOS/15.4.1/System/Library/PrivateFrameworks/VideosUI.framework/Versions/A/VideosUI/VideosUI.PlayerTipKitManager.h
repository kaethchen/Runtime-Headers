@interface VideosUI.PlayerTipKitManager : NSObject <VUIPlayerTipKitManager> {
    void /* unknown type, empty encoding */ localRadioBroadcastTip;
    void /* unknown type, empty encoding */ isTipKitConfigured;
}

- (id)init;
- (void).cxx_destruct;
- (void)configureTips;
- (void)handleRadioBroadcastSelected;

@end
