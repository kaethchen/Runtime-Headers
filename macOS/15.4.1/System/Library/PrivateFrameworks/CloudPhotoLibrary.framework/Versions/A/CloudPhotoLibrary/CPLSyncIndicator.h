@interface CPLSyncIndicator : NSObject

+ (void)setForeground:(BOOL)a0;
+ (void)_doProtected:(id /* block */)a0;
+ (void)_reallyHideSyncIndicator;
+ (void)_reallyShowSyncIndicator;
+ (void)hideSyncIndicator;
+ (void)showSyncIndicator;

@end
