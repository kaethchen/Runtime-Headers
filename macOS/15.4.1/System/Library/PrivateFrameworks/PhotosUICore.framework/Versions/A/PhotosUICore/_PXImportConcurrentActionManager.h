@class NSMutableArray;

@interface _PXImportConcurrentActionManager : NSObject {
    NSMutableArray *_operations;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (void)removeOperation:(id)a0;

@end
