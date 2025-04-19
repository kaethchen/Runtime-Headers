@class NSArray;
@protocol FCCoreConfiguration, FCBundleSubscriptionManagerType, FCContentContext;

@interface FCTagCuratedESLArticlesOperation : FCOperation {
    NSArray *_networkEvents;
    NSArray *_tags;
    id<FCContentContext> _context;
    id<FCCoreConfiguration> _configuration;
    id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
    NSArray *_evergreenArticleListIDs;
}

@property (copy, nonatomic) id /* block */ feedItemHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSArray *networkEvents;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (id)initWithTags:(id)a0 context:(id)a1 configuration:(id)a2 bundleSubscriptionManager:(id)a3;

@end
