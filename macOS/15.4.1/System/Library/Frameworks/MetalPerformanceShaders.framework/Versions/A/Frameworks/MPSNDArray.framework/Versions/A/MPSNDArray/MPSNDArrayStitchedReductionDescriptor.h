@interface MPSNDArrayStitchedReductionDescriptor : NSObject

@property (nonatomic) unsigned long long stateSize;
@property (nonatomic) id /* block */ invariantValueFn;
@property (nonatomic) id /* block */ mapFn;
@property (nonatomic) id /* block */ reduceFn;
@property (nonatomic) id /* block */ writeFn;

- (void)dealloc;
- (id)initWithStateSize:(unsigned long long)a0 invariantValueFn:(id /* block */)a1 mapFn:(id /* block */)a2 reduceFn:(id /* block */)a3 writeFn:(id /* block */)a4;

@end
