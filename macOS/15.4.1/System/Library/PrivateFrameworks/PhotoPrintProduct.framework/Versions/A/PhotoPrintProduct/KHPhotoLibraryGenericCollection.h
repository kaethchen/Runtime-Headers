@class NSString, NSMutableDictionary, NSURL, NSArray, NSMutableArray, KHImage;
@protocol KHPhotoLibraryCollection;

@interface KHPhotoLibraryGenericCollection : KHPhotoLibraryGenericBaseObject <KHPhotoLibraryCollection, KHPhotoGroupProtocol>

@property (weak, nonatomic) id<KHPhotoLibraryCollection> _parentCollection;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *author;
@property (readonly, nonatomic) NSMutableArray *imagePaths;
@property (readonly, nonatomic) NSMutableDictionary *properties;
@property (readonly, nonatomic) NSArray *collections;
@property (readonly, nonatomic) unsigned long long numberOfSubcollections;
@property (readonly, weak, nonatomic) id<KHPhotoLibraryCollection> parentCollection;
@property (readonly, nonatomic) unsigned long long numberOfPhotos;
@property (readonly, nonatomic) BOOL needsHydration;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id iconImage;
@property (readonly, nonatomic) BOOL hydrating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *pageLayoutGroupID;
@property (readonly) NSString *pageLayoutTitle;
@property (readonly) KHImage *pageLayoutKeyPhotoThumbnail;
@property (readonly) NSString *pageLayoutKeyPhotoID;
@property (readonly) unsigned long long pageLayoutPhotoCount;
@property (readonly) NSArray *pageLayoutPhotos;
@property (readonly) NSArray *pageLayoutPhotoIDs;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)URL;
- (long long)compare:(id)a0;
- (void)setURL:(id)a0;
- (void)setTitle:(id)a0;
- (id)title;
- (id)author;
- (id)photoAtIndex:(unsigned long long)a0;
- (void)setAuthor:(id)a0;
- (id)allPhotos;
- (BOOL)hydrating;
- (id)photoWithURL:(id)a0;
- (void)postHydrationBeganNotification;
- (void)postHydrationCompletedNotification;
- (id)subcollectionAtIndex:(unsigned long long)a0;

@end
