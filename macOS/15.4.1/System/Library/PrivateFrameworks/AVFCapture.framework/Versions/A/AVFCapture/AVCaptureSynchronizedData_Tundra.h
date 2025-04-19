@class AVCaptureSynchronizedDataInternal_Tundra;

@interface AVCaptureSynchronizedData_Tundra : NSObject {
    AVCaptureSynchronizedDataInternal_Tundra *_synchronizedDataInternal;
}

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } timestamp;

- (void)dealloc;

@end
