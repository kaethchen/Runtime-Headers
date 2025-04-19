@class BKSDyldSharedCacheLayoutRequest, NSUUID, NSArray;

@interface BKSDyldSharedCacheLayoutResult : NSObject

@property (readonly, nonatomic) BKSDyldSharedCacheLayoutRequest *request;
@property (readonly, nonatomic) BOOL succeeded;
@property (readonly, nonatomic) NSUUID *dyldSharedCacheUUID;
@property (readonly, nonatomic) unsigned long long dyldSharedCacheBaseAddress;
@property (readonly, nonatomic) NSArray *sortedSegments;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0 request:(id)a1;

@end
