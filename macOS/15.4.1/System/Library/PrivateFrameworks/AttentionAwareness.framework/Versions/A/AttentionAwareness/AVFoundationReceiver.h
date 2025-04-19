@protocol AVFoundationReceiving;

@interface AVFoundationReceiver : NSObject

@property (retain, nonatomic) id<AVFoundationReceiving> receiver;
@property (nonatomic) BOOL activateAttentionDetection;
@property (nonatomic) BOOL activateEyeRelief;
@property (nonatomic) BOOL activatePersonDetection;
@property (nonatomic) BOOL running;

- (void).cxx_destruct;
- (id)initForReceiver:(id)a0 activateAttentionDetection:(BOOL)a1 activateEyeRelief:(BOOL)a2 activatePersonDetection:(BOOL)a3;

@end
