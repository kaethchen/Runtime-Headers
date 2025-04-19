@class NSArray, NSString;

@interface AMSEngagementAppData : NSObject <NSCopying>

@property (retain) NSArray *cachedResponses;
@property (retain) NSArray *eventFilters;
@property (readonly) NSString *identifier;
@property (retain) NSString *lastSyncedBuild;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 cacheObject:(id)a1;
- (id)exportObject;

@end
