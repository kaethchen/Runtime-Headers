@interface SDSignalHandler : NSObject

+ (void)addMemoryHandler;
+ (void)addSignalHandler;
+ (void)setDelegate:(id)a0 memoryStatusFlags:(unsigned long long)a1;
+ (void)setupHandlers;

@end
