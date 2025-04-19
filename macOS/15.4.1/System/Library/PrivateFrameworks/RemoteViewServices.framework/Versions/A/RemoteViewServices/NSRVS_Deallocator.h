@class NSMutableArray;

@interface NSRVS_Deallocator : NSObject {
    NSMutableArray *_blocks;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addBlock:(id /* block */)a0;

@end
