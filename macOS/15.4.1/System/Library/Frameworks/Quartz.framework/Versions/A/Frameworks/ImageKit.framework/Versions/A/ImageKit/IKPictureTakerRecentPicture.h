@class NSString, NSDictionary, NSData, NSImage, IKImageWrapper;

@interface IKPictureTakerRecentPicture : NSObject {
    NSDictionary *_cropInfo;
    struct CGSize { double width; double height; } _cropSize;
    IKImageWrapper *_originalImage;
    NSData *_smallIconData;
    NSImage *_smallIconCache;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _crop;
    int _version;
    double _timeValue;
    void *_userInfo;
}

@property (retain) NSString *originalImageName;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) BOOL isABMeImage;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL isForHUD;
@property (nonatomic) BOOL isCurrent;

+ (id)recentPicturePlaceholderForHUD:(BOOL)a0;
+ (id)defaultRecentPictureWithImageWrapper:(id)a0 cropSize:(struct CGSize { double x0; double x1; })a1;
+ (id)defaultRecentPictureWithOriginalData:(id)a0 cropSize:(struct CGSize { double x0; double x1; })a1;
+ (id)defaultRecentPictureWithOriginalImage:(id)a0 cropSize:(struct CGSize { double x0; double x1; })a1;
+ (double)defaultThumbnailSize;
+ (id)emptyRecentPictureWithIcon:(id)a0;

- (void)dealloc;
- (void)finalize;
- (void *)userInfo;
- (int)version;
- (id)infoDictionary;
- (void)setUserInfo:(void *)a0;
- (id)imageRepresentation;
- (void)setTimeValue:(double)a0;
- (double)timeValue;
- (id)imageRepresentationType;
- (id)imageUID;
- (id)originalImage;
- (id)smallIcon;
- (id)cropInfo;
- (struct CGSize { double x0; double x1; })cropSize;
- (id)editedImage;
- (BOOL)hasSameThumbnailAsRecentPicture:(id)a0;
- (id)initWithOriginalImage:(id)a0 cropSize:(struct CGSize { double x0; double x1; })a1 cropInfo:(id)a2 smallIcon:(id)a3;
- (void)setCropInfo:(id)a0 smallIcon:(id)a1;
- (void)setCropSize:(struct CGSize { double x0; double x1; })a0;
- (void)upgradeForCropSize:(struct CGSize { double x0; double x1; })a0;

@end
