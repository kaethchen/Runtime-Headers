@class NSMapTable, NSMutableArray;

@interface MPMiddlewareOperationMap : NSObject {
    NSMapTable *_middlewareOperationMap;
    NSMutableArray *_middleware;
    NSMutableArray *_operations;
}

+ (id)mapForRequest:(id)a0;

- (void).cxx_destruct;
- (id)_init;
- (id)allMiddleware;
- (id)allOperations;
- (id)operationsForMiddleware:(id)a0;

@end
