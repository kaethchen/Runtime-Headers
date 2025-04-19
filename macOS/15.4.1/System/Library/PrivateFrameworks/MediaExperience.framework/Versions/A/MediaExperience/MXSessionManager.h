@class NSMutableDictionary, NSDictionary, NSSet, NSArray, NSLock;

@interface MXSessionManager : MXSessionManagerBase {
    NSMutableDictionary *mMXCoreSessionIDToAudioSessionTokenMap;
    NSLock *mLock;
    NSSet *mNotEligibleForSmartRoutingSessions;
    NSDictionary *mIncomingRingtoneToPhoneCallMap;
    NSSet *mBrowserHelperBundleIDs;
    NSArray *mAppsOptingIntoEligibleForSmartRouting;
}

@property (retain, nonatomic) NSDictionary *figCustomizedCategoryWithBluetooth_Dict;
@property (retain, nonatomic) NSDictionary *figCustomizedCategoryWithoutBluetooth_Dict;
@property (retain, nonatomic) NSLock *mxCoreSessionListLock;
@property (retain) NSDictionary *mobileAsset;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)audioAccessoryServicesDiedCallback:(id)a0;
- (void)canBeNowPlayingAppDidChangeCallback:(id)a0;
- (id)copyCoreSessionForID:(id)a0;
- (id)copyCoreSessionForMXSessionID:(id)a0;
- (id)copyMXCoreSessionList;
- (id)copyPlayingOrRecordingEligibleSmartRoutingSessions;
- (id)copyPlayingOrRecordingSessions;
- (id)copySessionForBundleID:(id)a0;
- (id)getAudioSessionIDForCoreSessionID:(id)a0;
- (id)getBluetoothCustomizedAlternateCategory:(id)a0 enableBluetooth:(BOOL)a1;
- (unsigned long long)getCoreSessionCount;
- (int)getSessionPriority:(struct MXSessionPlayingInfo { id x0; id x1; id x2; id x3; })a0 forTipi:(BOOL)a1;
- (void)interruptSessionsIfNeeded:(id)a0;
- (void)nowPlayingAppStateDidChangeCallback:(id)a0;
- (void)registerMXCoreSession:(id)a0;
- (void)requestForSharedOwnership:(id)a0 didNowPlayingInfoChange:(BOOL)a1 didCategoryOrModeChange:(BOOL)a2;
- (void)setUpStringConversionDictionaries;
- (BOOL)shouldRequestForForceHijack;
- (void)unregisterMXCoreSession:(id)a0;
- (void)updateCanBeNowPlaying:(id)a0 didRegister:(BOOL)a1;
- (void)updateCoreSessionIDToAudioSessionIDMap:(id)a0 audioSessionToken:(unsigned int)a1;
- (void)updateMobileAsset:(id)a0;
- (void)updatePriorityScoreFromAllowList:(id)a0 outScore:(unsigned int *)a1;

@end
