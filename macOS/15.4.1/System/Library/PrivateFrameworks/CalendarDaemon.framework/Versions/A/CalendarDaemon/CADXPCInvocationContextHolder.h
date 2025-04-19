@class NSMutableArray;

@interface CADXPCInvocationContextHolder : NSObject {
    NSMutableArray *_retainedArguments;
}

@property (readonly, nonatomic) id proxy;

- (void).cxx_destruct;
- (void)clear;
- (void)retainProxy:(id)a0 andArgumentsInInvocation:(id)a1;

@end
