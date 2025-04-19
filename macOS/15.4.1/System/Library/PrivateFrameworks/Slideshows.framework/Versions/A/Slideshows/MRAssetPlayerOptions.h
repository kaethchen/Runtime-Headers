@class MRImage;

@interface MRAssetPlayerOptions : NSObject {
    MRImage *_initialImage;
}

@property (readonly) BOOL isEmbeddedAsset;
@property (readonly) BOOL isStill;
@property (nonatomic) BOOL wantsMonochromatic;
@property (nonatomic) BOOL wantsMipmap;
@property (nonatomic) BOOL wantsPowerOfTwo;
@property (nonatomic) BOOL isForExport;
@property (nonatomic) BOOL thumbnailIsOK;
@property (nonatomic) double stillTime;
@property (nonatomic) struct CGSize { double width; double height; } resolutionIfEmbeddedAsset;
@property (retain) MRImage *initialImage;
@property (nonatomic) id playerHint;
@property (nonatomic) double introDuration;
@property (nonatomic) double mainDuration;
@property (nonatomic) double outroDuration;

- (void)dealloc;
- (id)init;

@end
