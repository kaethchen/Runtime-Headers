@class NSDictionary;

@interface AVCaptureStillImageRequest_Tundra : NSObject

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSDictionary *outputSettings;
@property (nonatomic) long long imageOrientation;
@property (nonatomic) BOOL imageMirrored;

+ (id)request;

- (void)dealloc;

@end
