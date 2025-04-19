@class IMRuntimeTest;

@interface IMRuntimeTestRun : NSObject

@property (getter=hasSucceeded) BOOL succeeded;
@property (readonly) IMRuntimeTest *test;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithTest:(id)a0;
- (void)recordFailureWithDescription:(id)a0 inFile:(id)a1 atLine:(unsigned long long)a2 expected:(BOOL)a3;

@end
