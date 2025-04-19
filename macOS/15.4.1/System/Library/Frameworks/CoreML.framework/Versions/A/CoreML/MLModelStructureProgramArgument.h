@class NSArray;

@interface MLModelStructureProgramArgument : NSObject

@property (readonly, copy, nonatomic) NSArray *bindings;

- (void).cxx_destruct;
- (id)initWithBindings:(id)a0;
- (id)initWithMILArguments:(const void *)a0;

@end
