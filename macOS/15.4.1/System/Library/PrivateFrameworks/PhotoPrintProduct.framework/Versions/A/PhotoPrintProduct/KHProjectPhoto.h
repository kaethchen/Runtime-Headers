@class NSRecursiveLock, NSString, KHImage, NSValue, KHProject, NSNumber;
@protocol KHPhotoInfoProtocol;

@interface KHProjectPhoto : KHModel {
    long long _projectId;
    NSString *_photoId;
    NSString *_caption;
    BOOL _isExtra;
    NSRecursiveLock *_cacheLock;
    id<KHPhotoInfoProtocol> _photoInfo;
    NSValue *_imageSizeValue;
    NSNumber *_imageExistsValue;
    NSNumber *_imageValidValue;
    KHImage *_thumbnailImage;
}

@property (readonly, nonatomic) KHProject *project;

+ (id)extraPhotosForProject:(id)a0;
+ (BOOL)hasUnplacedPhotosInProject:(id)a0;
+ (unsigned long long)photoCountForProject:(id)a0;
+ (id)photoForKey:(long long)a0 inDatabase:(id)a1;
+ (id)photoIdsForProject:(id)a0;
+ (id)photoIdsForProjectPhotos:(id)a0;
+ (id)photoInfosForProject:(id)a0;
+ (id)photoInfosForProjectPhotos:(id)a0;
+ (id)photosForProject:(id)a0;
+ (id)placedPhotoIdsForProject:(id)a0;
+ (id)placedPhotoIdsForProject:(id)a0 sortedBy:(unsigned long long)a1;
+ (id)placedPhotoInfosForProject:(id)a0 sortedBy:(unsigned long long)a1;
+ (id)placedPhotosForProject:(id)a0;
+ (id)placedPhotosForProject:(id)a0 sortedBy:(unsigned long long)a1;
+ (id)unplacedPhotoIdsForProject:(id)a0;
+ (id)unplacedPhotoInfosForProject:(id)a0;
+ (id)unplacedPhotosForProject:(id)a0;

- (void)dealloc;
- (void)remove;
- (double)aspectRatio;
- (void)clearCache;
- (id)clone;
- (struct CGSize { double x0; double x1; })imageSize;
- (void)setThumbnailImage:(id)a0;
- (id)thumbnailImage;
- (BOOL)isExtra;
- (void)setIsExtra:(BOOL)a0;
- (id)caption;
- (id)photoId;
- (void)setPhotoId:(id)a0;
- (void)setCaption:(id)a0;
- (BOOL)imageExists;
- (long long)projectId;
- (void)setProjectId:(long long)a0;
- (void)cacheProjectId:(long long)a0;
- (void)cacheCaption:(id)a0;
- (void)cacheIsExtra:(BOOL)a0;
- (void)cachePhotoId:(id)a0;
- (id)cloneInDatabase:(id)a0;
- (BOOL)imageValid;
- (id)initWithModelId:(id)a0 inDatabase:(id)a1;
- (BOOL)isProjectModel;
- (id)photoInfo;
- (void)setIsExtra:(BOOL)a0 notify:(BOOL)a1;
- (void)setPhotoInfo:(id)a0;
- (long long)sortByDate:(id)a0;
- (long long)sortByDefault:(id)a0;
- (long long)sortById:(id)a0;
- (long long)sortByName:(id)a0;
- (id)thumbnailImageIfCached;
- (void)undoRedoSetIsExtra:(BOOL)a0;
- (void)undoRedoSetIsExtra:(BOOL)a0 notify:(BOOL)a1;
- (void)writeValue:(id)a0 toField:(id)a1;

@end
