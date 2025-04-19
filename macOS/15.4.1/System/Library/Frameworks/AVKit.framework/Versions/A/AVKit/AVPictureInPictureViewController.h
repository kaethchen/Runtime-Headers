@class AVPictureInPicturePlayerLayerView, AVPlayerController;

@interface AVPictureInPictureViewController : NSViewController

@property (retain, nonatomic) AVPlayerController *playerController;
@property (readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithPictureInPicturePlayerLayerView:(id)a0;

@end
