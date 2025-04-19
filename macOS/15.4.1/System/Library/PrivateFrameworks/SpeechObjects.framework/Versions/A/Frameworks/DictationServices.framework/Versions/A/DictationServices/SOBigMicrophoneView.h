@class NSString, CALayer, CAStateController;

@interface SOBigMicrophoneView : NSView <CAStateControllerDelegate, SOMicrophoneViewMeterLevelConsumer> {
    CAStateController *_stateController;
    CALayer *_microphoneFillLayer;
    CALayer *_microphoneRootLayer;
    CALayer *_microphoneFillRootLayer;
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
- (void)setLinearMeterLevel:(float)a0;
- (void)updateLinearMeterLevel:(float)a0;

@end
