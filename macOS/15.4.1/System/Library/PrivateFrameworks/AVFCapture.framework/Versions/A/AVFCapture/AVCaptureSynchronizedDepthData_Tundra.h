@class AVCaptureSynchronizedDepthDataInternal_Tundra, AVDepthData;

@interface AVCaptureSynchronizedDepthData_Tundra : AVCaptureSynchronizedData_Tundra {
    AVCaptureSynchronizedDepthDataInternal_Tundra *_internal;
}

@property (readonly) AVDepthData *depthData;
@property (readonly) BOOL depthDataWasDropped;
@property (readonly) long long droppedReason;

- (void)dealloc;

@end
