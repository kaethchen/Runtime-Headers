@class NSMutableArray;
@protocol IKPTRecentsService;

@interface IKPictureTakerRecentsManager : NSObject {
    id<IKPTRecentsService> _recentsService;
    NSMutableArray *_recents;
}

+ (id)defaultManager;

- (void)dealloc;
- (id)init;
- (id)userPictureData;
- (void)addRecent:(id)a0;
- (void)addRecent:(id)a0 includingCurrent:(id)a1;
- (id)bestRepresentationForRecentPicture:(id)a0;
- (void)clearRecents:(BOOL)a0;
- (void)eraseRecentPictures:(id)a0 async:(BOOL)a1;
- (id)originalImageForRecentPicture:(id)a0;
- (void)pullRecentPicturesAsync:(BOOL)a0;
- (void)pushRecentPicturesAsync:(BOOL)a0;
- (id)recentPictureWithID:(id)a0;
- (id)recentPictureWithInfo:(id)a0 thumbnail:(id)a1;
- (id)recentPictures;
- (id)recentsService;
- (void)removeRecent:(id)a0;
- (void)setRecentPictureAsCurrent:(id)a0;
- (void)updateRecentPicture:(id)a0 setCropInfo:(id)a1 smallIcon:(id)a2;

@end
