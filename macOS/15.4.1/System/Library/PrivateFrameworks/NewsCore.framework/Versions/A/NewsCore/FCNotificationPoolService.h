@protocol FCContentVariantProviding, FCContentContext;

@interface FCNotificationPoolService : NSObject <FCNotificationPoolServiceType>

@property (readonly, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) id<FCContentVariantProviding> contentVariantProvider;

- (id)init;
- (void).cxx_destruct;
- (void)fetchPoolWithCompletionHandler:(id /* block */)a0;
- (id)initWithContext:(id)a0 contentVariantProvider:(id)a1;

@end
