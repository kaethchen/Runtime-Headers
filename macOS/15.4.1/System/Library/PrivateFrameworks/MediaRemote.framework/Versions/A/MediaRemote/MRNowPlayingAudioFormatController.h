@class FBSDisplayLayoutMonitor, NSArray, NSString, MRClient, MRNowPlayingAudioFormatContentInfo, NSObject, MRNowPlayingAudioFormatApplication;
@protocol OS_dispatch_queue, MRNowPlayingAudioFormatControllerDelegate;

@interface MRNowPlayingAudioFormatController : NSObject

@property (retain, nonatomic) NSArray *contentInfos;
@property (retain, nonatomic) MRClient *activeClient;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor;
@property (retain, nonatomic) NSString *foregroundBundleID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<MRNowPlayingAudioFormatControllerDelegate> delegate;
@property (readonly, nonatomic) MRNowPlayingAudioFormatApplication *audioFormatApplication;
@property (readonly, nonatomic) MRNowPlayingAudioFormatContentInfo *audioFormatContentInfo;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasNowPlayingApp;
@property (readonly, copy, nonatomic) NSString *audioFormatDescription;
@property (readonly, copy, nonatomic) NSString *bestAvailableAudioFormatDescription;
@property (readonly, nonatomic, getter=isMultichannel) BOOL multichannel;
@property (readonly, nonatomic) long long bestAvailableAudioFormat;
@property (readonly, nonatomic, getter=isEligibleForSpatialization) BOOL eligibleForSpatialization;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)displayNameForBundleID:(id)a0;
- (void)activeClientDidChange:(id)a0;
- (void)contentInfoDidChange:(id)a0;
- (id)contentInfoForBundleID:(id)a0 contentInfos:(id)a1;
- (id)faceTimeBundleSet;
- (id)firstContentInfoMatchingSet:(id)a0 contentInfos:(id)a1;
- (id)firstEligibleContentInfoFor:(id)a0;
- (void)updateActiveClient;
- (void)updateAudioFormatContentInfo;
- (void)updateDeprecatedApplication;
- (void)updateDeprecatedContentInfo;
- (void)updateForegroundBundleID;
- (void)updateSelectedContentInfo;

@end
