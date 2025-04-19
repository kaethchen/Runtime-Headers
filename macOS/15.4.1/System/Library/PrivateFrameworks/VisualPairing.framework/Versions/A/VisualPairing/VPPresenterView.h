@class NSString, NSArray, CALayer, NSObject, AVPlayer;
@protocol OS_dispatch_source;

@interface VPPresenterView : NSView {
    AVPlayer *_moviePlayer;
    BOOL _started;
    CALayer *_watermarkLayer;
    NSArray *_watermarkPixelBuffers;
    unsigned long long _watermarkStepIndex;
    NSObject<OS_dispatch_source> *_watermarkStepTimer;
}

@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *verificationCode;

- (void).cxx_destruct;
- (void)start;
- (void)layout;
- (void)stop;
- (void)viewDidEndLiveResize;
- (void)_watermarkStep;

@end
