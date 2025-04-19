@class NSString;

@interface _IMDispatchQueueBlock : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long priority;
@property (nonatomic, setter=setFIFO:) unsigned long long fifo;

- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)cancel;
- (id)initWithBlock:(id /* block */)a0 key:(id)a1 priority:(long long)a2 fifo:(unsigned long long)a3;

@end
