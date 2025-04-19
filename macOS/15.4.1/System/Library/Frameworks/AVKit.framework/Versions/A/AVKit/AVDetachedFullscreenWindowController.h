@class AVDetachedFullscreenController;

@interface AVDetachedFullscreenWindowController : NSWindowController {
    AVDetachedFullscreenController *_avkitOwner;
}

@property (readonly, weak, nonatomic) AVDetachedFullscreenController *owner;

- (void).cxx_destruct;
- (id)initWithWindow:(id)a0 owner:(id)a1;

@end
