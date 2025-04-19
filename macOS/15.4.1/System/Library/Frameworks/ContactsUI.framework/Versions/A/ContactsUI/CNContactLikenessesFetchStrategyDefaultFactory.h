@protocol CNUIParentContainerCache;

@interface CNContactLikenessesFetchStrategyDefaultFactory : NSObject <CNContactLikenessesFetchStrategyFactory>

@property (retain, nonatomic) id<CNUIParentContainerCache> parentContainerCache;

- (void).cxx_destruct;
- (id)initWithParentContainerCache:(id)a0;
- (id)strategyForContact:(id)a0;

@end
