@class NSMutableArray;

@interface MTRDownloads : NSObject

@property (retain, nonatomic) NSMutableArray *downloads;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)remove:(id)a0;
- (void)abortDownloadsForController:(id)a0;
- (id)add:(long long)a0 fabricIndex:(id)a1 nodeID:(id)a2 queue:(id)a3 completion:(id /* block */)a4 done:(id /* block */)a5;
- (id)get:(id)a0 fabricIndex:(id)a1 nodeID:(id)a2;

@end
