@class NSArray;
@protocol FCContentVariantProviding, FCContentContext;

@interface FCNotificationPoolOperation : FCOperation {
    id<FCContentContext> _context;
    id<FCContentVariantProviding> _contentVariantProvider;
    NSArray *_resultNotificationItems;
}

@property (copy, nonatomic) id /* block */ itemHandler;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithContext:(id)a0 contentVariantProvider:(id)a1;

@end
