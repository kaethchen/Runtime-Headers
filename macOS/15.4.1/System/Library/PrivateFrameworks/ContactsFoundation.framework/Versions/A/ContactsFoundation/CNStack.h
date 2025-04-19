@class NSMutableArray;

@interface CNStack : NSObject {
    NSMutableArray *_objects;
}

@property (readonly, nonatomic) id peek;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)push:(id)a0;
- (id)pop;
- (void)popWithHandler:(id /* block */)a0;
- (id)popAll;
- (void)popAllWithHandler:(id /* block */)a0;

@end
