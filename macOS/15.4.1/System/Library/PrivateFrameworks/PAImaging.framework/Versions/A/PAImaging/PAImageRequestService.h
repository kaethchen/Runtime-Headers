@class NSString, NSObject, PAImageCache;
@protocol OS_os_log;

@interface PAImageRequestService : NSObject <PAImageRequestService> {
    PAImageCache *_metadataImageCache;
    NSObject<OS_os_log> *_logger;
}

@property (retain) PAImageCache *masterImageCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)registerDefaults;

@end
