@class NSNumber;

@interface AMSHTTPArchiveController : NSObject

@property (class, getter=isRemoveDisabled) BOOL removeDisabled;
@property (class, retain) NSNumber *maxBufferSizeOverride;

+ (void)initialize;
+ (BOOL)_disabled;
+ (void)addHTTPArchive:(id)a0;
+ (id)_harURLFilters;
+ (BOOL)_shouldAddRequest:(id)a0;
+ (void)_updateHarFileFilters;
+ (id)harURLFilters;

@end
