@interface SMToolBox : NSObject

+ (void)sendSignal:(int)a0 toAllProcesses:(id)a1;
+ (void)sendSignal:(int)a0 toProcess:(id)a1 andPID:(int)a2;

@end
