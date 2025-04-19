@interface ServiceProxy : NSObject

+ (id)commerceService;
+ (id)_commerceConnection;
+ (id)commerceClient;
+ (id)commerceClientInterface;
+ (id)commerceServiceInterface;
+ (id)commerceServiceWithErrorHandler:(id /* block */)a0;
+ (id)commerceSynchronousService;
+ (id)commerceSynchronousServiceWithErrorHandler:(id /* block */)a0;

@end
