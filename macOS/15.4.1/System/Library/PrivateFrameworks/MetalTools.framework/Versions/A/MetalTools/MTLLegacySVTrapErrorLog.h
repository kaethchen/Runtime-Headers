@class NSString;

@interface MTLLegacySVTrapErrorLog : MTLLegacySVGPULog

@property (retain, nonatomic) NSString *functionName;

- (void)dealloc;
- (id)description;

@end
