@class NSString, NSURL, IKSlideshowDataSourceHandler;

@interface IKSlideshowElement : NSObject {
    IKSlideshowDataSourceHandler *_dataSourceHandler;
    BOOL _loading;
    BOOL _displayAfterLoad;
    BOOL _didHandleSiblings;
    struct CGImage { } *_thumbnail;
}

@property IKSlideshowElement *next;
@property IKSlideshowElement *prev;
@property unsigned long long dataSourceIndex;
@property unsigned long long subIndex;
@property double transitionTime;
@property int direction;
@property BOOL dataSourceItemIsCached;
@property BOOL markedForExport;
@property BOOL preventZoom;
@property BOOL loadDidFail;
@property BOOL imageLoaded;
@property struct CGSize { double width; double height; } thumbnailSize;
@property BOOL thumbnailLoaded;
@property (copy) NSString *name;
@property (copy) NSString *utType;
@property (copy) NSURL *cachedURL;

+ (id)questionMarkURL;
+ (struct CGImage { } *)questionMarkThumbnail;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)cleanup;
- (void)unload;
- (void)setThumbnail:(struct CGImage { } *)a0;
- (struct CGImage { } *)thumbnail;
- (void)load:(BOOL)a0;
- (id)debugState;
- (void)removeFromList;
- (id)initWithDataSourceHandler:(id)a0 index:(unsigned long long)a1 subIndex:(unsigned long long)a2;
- (void)insertAfter:(id)a0;
- (void)loadThumbnail:(BOOL)a0 currentCount:(unsigned long long)a1;
- (void)thumbnailLoadingFailed;

@end
