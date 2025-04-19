@class NSArray, NSString, NSDate;

@interface TILaunchServicesLookup : NSObject <TIKeyboardActivityObserving>

@property (retain, nonatomic) NSArray *cache;
@property (retain, nonatomic) NSDate *lastCacheUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)disableForTesting:(BOOL)a0;
+ (void)enumerateInstalledApplicationNames:(id /* block */)a0;
+ (id)genreIDsForApplicationIdentifier:(id)a0;
+ (id)lookupAppNames;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resetCache;
- (id)appNames;
- (void)cacheNames:(id)a0;
- (void)enumerateAppNames:(id /* block */)a0;
- (void)handleMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void)keyboardActivityDidTransition:(id)a0;
- (id)tryCache;

@end
