@class NSCache, NSString;

@interface AVWaveformController : NSObject <NSCacheDelegate>

@property (readonly, nonatomic) NSCache *waveformCache;
@property (readonly) unsigned long long cacheCapacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (id)waveformForAudioTrack:(id)a0;
- (id)_waveformForAudioTrack:(id)a0;
- (id)initWithCacheCapacity:(unsigned long long)a0;

@end
