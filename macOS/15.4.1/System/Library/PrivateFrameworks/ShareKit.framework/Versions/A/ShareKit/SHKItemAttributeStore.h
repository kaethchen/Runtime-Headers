@class NSDictionary, NSObject;
@protocol SHKShareItem, OS_dispatch_semaphore;

@interface SHKItemAttributeStore : NSObject

@property (retain, nonatomic) id<SHKShareItem> shareItem;
@property (retain) NSObject<OS_dispatch_semaphore> *sem;
@property (retain, nonatomic) NSDictionary *attributes;

+ (struct __MDItem { } *)createMDItemForShareItem:(id)a0;
+ (void)notifySpotlightShareItems:(id)a0 wereSharedWithSharingService:(id)a1;

- (void).cxx_destruct;
- (void)attributesForShareItem:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)fetchAttributesWithCompletionHandler:(id /* block */)a0;
- (id)initWithShareItem:(id)a0;
- (void)startFectchingAttributes;

@end
