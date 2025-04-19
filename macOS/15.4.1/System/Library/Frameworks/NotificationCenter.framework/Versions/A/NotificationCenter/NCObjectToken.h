@interface NCObjectToken : NSObject

@property (copy, nonatomic) id /* block */ block;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
