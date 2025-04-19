@class NSString, NSArray, NSError;

@interface WFRuntimeRunnableDataSourceImpl : NSObject

- (id)init;
- (void)loadEntriesFor:(Class)a0 parameterKey:(NSString *)a1 collectionIdentifier:(NSString *)a2 limit:(long long)a3 completionHandler:(void (^)(NSArray *, NSError *))a4;

@end
