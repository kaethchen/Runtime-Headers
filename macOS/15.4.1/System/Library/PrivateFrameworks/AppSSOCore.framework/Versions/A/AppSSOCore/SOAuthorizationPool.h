@class NSMutableArray;

@interface SOAuthorizationPool : NSObject {
    NSMutableArray *_pool;
}

- (id)init;
- (void).cxx_destruct;
- (void)addAuthorization:(id)a0 delegate:(id)a1;
- (void)removeAuthorization:(id)a0;

@end
