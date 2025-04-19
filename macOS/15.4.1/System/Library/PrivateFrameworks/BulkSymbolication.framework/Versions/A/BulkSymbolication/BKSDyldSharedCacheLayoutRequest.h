@class NSUUID;

@interface BKSDyldSharedCacheLayoutRequest : NSObject

@property (readonly, nonatomic) NSUUID *dyldSharedCacheUUID;

- (void).cxx_destruct;
- (id)initWithDyldSharedCacheUUID:(id)a0;

@end
