@class NSString, NSArray, MAFloatVector, MAIndexCache;

@interface MASeries : NSObject

@property (readonly, nonatomic) MAIndexCache *indexCache;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *labels;
@property (readonly, copy, nonatomic) MAFloatVector *vector;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (float)valueAtIndex:(long long)a0;
- (id)initWithName:(id)a0 indexCache:(id)a1 vector:(id)a2;
- (id)initWithName:(id)a0 labels:(id)a1 vector:(id)a2;
- (id)valueByLabels;
- (id)valueForLabel:(id)a0;

@end
