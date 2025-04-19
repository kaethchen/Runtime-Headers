@interface NSSLSTransaction : NSObject

+ (id)currentTransaction;

- (void)entangleHandle:(id)a0;
- (void)enqueueSerializedUpdatesUsingBlock:(id /* block */)a0;
- (void)entangleContext:(id)a0;

@end
