@class NSArray;

@interface PETStringPairs : NSObject

@property (readonly, nonatomic) NSArray *keys;
@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)keyAtIndex:(unsigned long long)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)initWithKeys:(id)a0 values:(id)a1;
- (id)subsetForKeys:(id)a0;

@end
