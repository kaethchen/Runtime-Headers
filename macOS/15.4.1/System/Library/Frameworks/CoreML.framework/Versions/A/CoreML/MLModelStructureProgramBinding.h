@class NSString, MLModelStructureProgramValue;

@interface MLModelStructureProgramBinding : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) MLModelStructureProgramValue *value;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithValue:(id)a0;

@end
