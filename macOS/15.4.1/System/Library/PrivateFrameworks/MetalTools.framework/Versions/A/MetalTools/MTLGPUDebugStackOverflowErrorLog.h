@class NSString;

@interface MTLGPUDebugStackOverflowErrorLog : MTLGPUDebugGPULog

@property (retain, nonatomic) NSString *functionName;

- (void)dealloc;
- (id)description;

@end
