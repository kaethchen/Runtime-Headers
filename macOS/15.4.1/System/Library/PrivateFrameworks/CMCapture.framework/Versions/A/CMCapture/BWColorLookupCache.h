@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BWColorLookupCache : NSObject {
    NSObject<OS_dispatch_queue> *_coreImageCacheIsolationQueue;
    NSMutableDictionary *_coreImageTableCache;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)interpolatedColorLookupTableFromTable:(id)a0 toTable:(id)a1 fractionComplete:(float)a2;
- (id)blackColorLookupTable;
- (id)colorLookupTablesForFilter:(id)a0;
- (id)fetchColorLookupTablesForFilter:(id)a0;
- (id)identityColorLookupTable;
- (id)whiteColorLookupTable;

@end
