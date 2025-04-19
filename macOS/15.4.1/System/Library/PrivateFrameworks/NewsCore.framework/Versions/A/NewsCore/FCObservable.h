@class NSMutableArray;

@interface FCObservable : NSObject

@property (retain, nonatomic) NSMutableArray *observers;
@property (nonatomic) unsigned long long token;
@property (retain, nonatomic) id value;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (void)next:(id)a0;
- (id)observe:(id /* block */)a0;
- (void)quietNext:(id)a0;

@end
