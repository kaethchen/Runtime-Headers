@class History;

@interface HistoryOperation : NSObject {
    History *_history;
    id /* block */ _block;
}

- (void).cxx_destruct;
- (void)commit;
- (id)initWithHistory:(id)a0 block:(id /* block */)a1;

@end
