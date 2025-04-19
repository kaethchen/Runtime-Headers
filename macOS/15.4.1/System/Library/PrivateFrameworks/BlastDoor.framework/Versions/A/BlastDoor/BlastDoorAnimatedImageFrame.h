@class NSString, BlastDoorImage;

@interface BlastDoorAnimatedImageFrame : NSObject {
    void /* unknown type, empty encoding */ animatedImageFrame;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorImage *image;
@property (nonatomic, readonly) BOOL has_frameDuration;
@property (nonatomic, readonly) double frameDuration;
@property (nonatomic, readonly) NSString *stickerEffect;
@property (nonatomic, readonly) unsigned long long stickerEffectType;
@property (nonatomic, readonly) NSString *utTypeString;

- (id)init;
- (void).cxx_destruct;

@end
