@class NSString, MTLGPUDebugImageData, NSArray;
@protocol MTLFunction, MTLFunctionLogDebugLocation;

@interface MTLGPUDebugGPULog : NSObject <MTLFunctionLog>

@property (readonly, nonatomic) NSString *locationDescription;
@property (readonly, nonatomic) NSString *functionDescription;
@property (retain, nonatomic) MTLGPUDebugImageData *image;
@property (retain, nonatomic) NSArray *errorStackTrace;
@property (nonatomic) unsigned long long callIndex;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *encoderLabel;
@property (retain, nonatomic) id<MTLFunction> function;
@property (retain, nonatomic) id<MTLFunctionLogDebugLocation> debugLocation;
@property (retain, nonatomic) NSString *pipelineIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
