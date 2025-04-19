@class NSString;
@protocol _OSLogCache;

@interface DataCache : NSObject <DataCache>

@property (readonly, nonatomic) id<_OSLogCache> cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
