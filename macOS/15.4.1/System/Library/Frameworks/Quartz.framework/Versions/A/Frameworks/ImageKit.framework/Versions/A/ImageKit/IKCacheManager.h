@class IKVRamManager, NSString, IKRamManager, IKCacheData;

@interface IKCacheManager : NSObject <IKVRamManagerDelegateProtocol, IKRamManagerDelegateProtocol> {
    IKVRamManager *_vramManager;
    IKRamManager *_ramManager;
    IKCacheData *_cache;
    BOOL _openGLEnabled;
    unsigned int _cacheTimeoutReferenceSessionID;
    int _cacheTimeoutNotificationPosted;
    id _cacheTimeoutLauncher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (id)database;
- (unsigned int)sessionID;
- (void)purge;
- (id)iconCache;
- (void)IKCleanTimedOutCache;
- (void)_startCacheTimeOutTimer;
- (void)_stopCacheTimeOutTimerIfNeeded;
- (BOOL)addThumbnail:(id)a0 atUID:(id)a1;
- (BOOL)alreadyHasIconInCache:(struct OpaqueIconRef { } *)a0 atSize:(int)a1 validForUID:(id)a2;
- (int)bestThumbnailSizeWithIndex:(id)a0 renderingSize:(struct CGSize { double x0; double x1; })a1 glRendering:(BOOL)a2 lowFrameRateMode:(BOOL)a3;
- (id)bindEntryInRam:(unsigned long long)a0 size:(int)a1;
- (id)bindEntryInVRam:(unsigned long long)a0 size:(int)a1;
- (void)bumpSession;
- (void)bumpSessionOfEntry:(unsigned long long)a0 size:(int)a1;
- (void)compressEntryIfNeeded:(unsigned long long)a0 size:(int)a1;
- (unsigned long long)countOfBoundSizesAtIndex:(unsigned long long)a0;
- (void)flushGLOperations;
- (void)freeCache;
- (void)freeCacheForUID:(id)a0;
- (void)freeRamCache;
- (void)freeVRamCache;
- (id)imageAtIndex:(unsigned long long)a0 size:(int)a1;
- (id)initWithVRAMSupport:(BOOL)a0 sharedContext:(id)a1 pixelFormat:(id)a2;
- (void)invalidateEntryAtUID:(id)a0;
- (void)makeReadyForSharedContext:(id)a0 pixelFormat:(id)a1;
- (id)ramManager;
- (void)ramManagerDidUnbindEntry:(unsigned long long)a0 withSize:(int)a1;
- (void)resetInternalCacheVersionForUID:(id)a0;
- (void)unbindEntriedOlderThanSessionID:(unsigned int)a0;
- (void)unbindEntriesAtIndex:(unsigned long long)a0;
- (void)unbindEntryAtIndex:(unsigned long long)a0 size:(int)a1;
- (unsigned long long)unshareEntriesWithUIDIfNeeded:(id)a0;
- (void)unshareIconIfNeeded:(id)a0;
- (id)vramManager;
- (void)vramManagerDidUnbindEntry:(unsigned long long)a0 withSize:(int)a1;

@end
