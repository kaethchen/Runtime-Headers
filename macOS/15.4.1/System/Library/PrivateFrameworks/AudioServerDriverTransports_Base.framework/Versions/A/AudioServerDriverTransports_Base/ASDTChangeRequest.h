@interface ASDTChangeRequest : NSObject

@property (nonatomic) unsigned int index;
@property (copy, nonatomic) id /* block */ block;

+ (id)withIndex:(unsigned int)a0 andBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithIndex:(unsigned int)a0 andBlock:(id /* block */)a1;

@end
