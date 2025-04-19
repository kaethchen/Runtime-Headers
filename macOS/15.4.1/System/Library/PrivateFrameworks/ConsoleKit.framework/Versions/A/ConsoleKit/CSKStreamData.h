@class CSKStreamSortedData, CSKEntity;
@protocol CSKStreamDataDelegate;

@interface CSKStreamData : NSObject

@property (readonly, nonatomic) CSKStreamSortedData *sortedData;
@property (nonatomic) unsigned long long objectsCount;
@property (weak, nonatomic) id<CSKStreamDataDelegate> delegate;
@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long direction;
@property (weak, nonatomic) CSKEntity *keyEntity;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)allMessages;
- (void)removeEntitiesCount:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)_isCapacityReached;
- (id)_keyEntityFromMessages:(id)a0 activities:(id)a1 direction:(unsigned long long)a2;
- (id)_popActivitiesFromSortedData:(unsigned long long)a0 direction:(unsigned long long)a1;
- (id)_popMessagesFromSortedData:(unsigned long long)a0 direction:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeForListCount:(unsigned long long)a0 targetCount:(unsigned long long)a1 direction:(unsigned long long)a2;
- (id)_removeFromSortedDataActivitiesRelatedToMessages:(id)a0;
- (id)_removeFromSortedDataMessagesRelatedToActivities:(id)a0;
- (Class)_sortedDataEntityClassEligibleForRemoval;
- (void)addEntities:(id)a0 direction:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)allActivities;

@end
