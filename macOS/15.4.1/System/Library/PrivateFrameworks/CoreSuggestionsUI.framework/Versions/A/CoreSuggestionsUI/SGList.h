@class NSMutableArray;
@protocol SGListDelegate;

@interface SGList : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (weak, nonatomic) id<SGListDelegate> delegate;
@property (copy, nonatomic) id /* block */ comparator;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (BOOL)addItem:(id)a0;
- (void)removeAllItems;
- (BOOL)removeItem:(id)a0;
- (unsigned long long)indexOfItem:(id)a0;
- (id)items;

@end
