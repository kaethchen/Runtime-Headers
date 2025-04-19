@class NSString;

@interface ATXFamilyCircleCache : NSObject {
    NSString *_path;
}

- (id)init;
- (void).cxx_destruct;
- (id)_cache;
- (id)initWithCachePath:(id)a0;
- (BOOL)hasiCloudFamily;
- (id)_fetchFamilyCircleFromCache;
- (id)_requestUpdatedFamilyCircle;
- (id)fetchFamilyCircle;

@end
