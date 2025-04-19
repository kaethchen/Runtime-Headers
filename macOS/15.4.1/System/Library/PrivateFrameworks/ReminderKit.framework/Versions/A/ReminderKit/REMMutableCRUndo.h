@class NSMutableArray;

@interface REMMutableCRUndo : NSObject

@property (readonly, nonatomic) NSMutableArray *undoBlocks;

- (id)init;
- (void).cxx_destruct;
- (id)immutableCopy;
- (void)addUndoBlock:(id /* block */)a0;

@end
