@class NSString, CALayer, CAStateController;

@interface SORecognitionWindowAnimatedContentView : NSView <CAStateControllerDelegate, SOMicrophoneViewMeterLevelConsumer> {
    CAStateController *_stateController;
    CALayer *_microphoneLayer;
    CALayer *_microphoneRootLayer;
}

@property (nonatomic) long long contentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)layout;
- (BOOL)allowsVibrancy;
- (void)awakeFromNib;
- (id)stateController;
- (long long)contentState;
- (void)setContentState:(long long)a0;
- (void)_loadMicrophonePackage;
- (id)_micaPackage;
- (void)setLinearMeterLevel:(float)a0;
- (void)updateLinearMeterLevel:(float)a0;

@end
