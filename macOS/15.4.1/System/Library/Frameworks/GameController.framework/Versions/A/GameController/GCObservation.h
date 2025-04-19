@interface GCObservation : NSObject

@property (weak, nonatomic) id observer;
@property (nonatomic) unsigned long long options;
@property (nonatomic) void *context;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 options:(unsigned long long)a1 context:(void *)a2;

@end
