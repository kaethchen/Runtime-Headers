@class NSString;

@interface MTLLegacySVStackOverflowErrorLog : MTLLegacySVGPULog

@property (retain, nonatomic) NSString *functionName;

- (void)dealloc;
- (id)description;

@end
