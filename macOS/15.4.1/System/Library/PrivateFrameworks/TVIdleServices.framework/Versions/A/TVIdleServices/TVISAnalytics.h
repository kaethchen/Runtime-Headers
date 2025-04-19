@interface TVISAnalytics : NSObject

+ (void)sendAerialsDeactivatedCategory:(id)a0;
+ (void)sendMusicPlayedOverAerialsEvent;
+ (void)sendMusicPausedOverAerialsEvent;
+ (void)_sendAnalyticsAction:(id)a0;
+ (void)_sendAnalyticsAction:(id)a0 payload:(id)a1;
+ (void)sendAerialAssetBatchDownloadedEventWithSuccessCount:(unsigned long long)a0 failureCount:(unsigned long long)a1;
+ (void)sendAerialsActivatedCategory:(id)a0;
+ (void)sendAerialsActivatedSubcategory:(id)a0;
+ (void)sendAerialsDeactivatedSubcategory:(id)a0;
+ (void)sendAerialsExitedEventWithDuration:(double)a0;
+ (void)sendAerialsLocationLabelShownEvent;
+ (void)sendAerialsStartedEventWithUserAction:(BOOL)a0 enabledCategories:(id)a1 disabledCategories:(id)a2;
+ (void)sendAerialsSwipeEventWithDirection:(id)a0;
+ (void)sendMemoriesAssetBatchDownloadedEventWithSuccessCount:(unsigned long long)a0 failureCount:(unsigned long long)a1;
+ (void)sendMemoriesExitedEventWithDuration:(double)a0;
+ (void)sendMemoriesLabelShownEvent;
+ (void)sendMemoriesSelectedPhotosSharingFilter:(long long)a0;
+ (void)sendMemoriesSelectedPhotosSourceFilter:(long long)a0;
+ (void)sendMemoriesStartedEventWithUserAction:(BOOL)a0;
+ (void)sendMemoriesSwipeEventWithDirection:(id)a0;
+ (void)sendMemoriesToBePlayedWithCount:(unsigned long long)a0 photosSourceFilter:(long long)a1 photosSharingFilter:(long long)a2;
+ (void)sendMusicTrackSeekedOverAerialsEventWithDirection:(id)a0;
+ (void)sendPortraitClockActivatedCategory:(id)a0;
+ (void)sendPortraitClockAssetBatchDownloadedEvent;
+ (void)sendPortraitClockDeactivatedCategory:(id)a0;
+ (void)sendPortraitClockExitedEventWithDuration:(double)a0;
+ (void)sendPortraitClockStartedEventWithEnabledCategories:(id)a0 assetCount:(unsigned long long)a1;
+ (void)sendPortraitClockSwipeEventWithDirection:(id)a0;
+ (void)sendScreenSaverActivatedType:(long long)a0;
+ (void)sendScreenSaverLaunchedWithSelectedPoster:(id)a0;
+ (void)sendSwitcherSessionConcludedWithPhotosPosterDeferred:(BOOL)a0 photosPosterState:(unsigned long long)a1 portraitPosterDeferred:(unsigned long long)a2 portraitPosterState:(unsigned long long)a3 reason:(unsigned long long)a4;

@end
