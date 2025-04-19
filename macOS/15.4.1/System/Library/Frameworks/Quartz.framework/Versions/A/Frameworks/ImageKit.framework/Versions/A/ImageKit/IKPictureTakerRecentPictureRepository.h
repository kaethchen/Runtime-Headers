@interface IKPictureTakerRecentPictureRepository : NSObject

+ (id)recentRepository;

- (void)addRecent:(id)a0;
- (void)clearRecents:(BOOL)a0;
- (id)recentPictures;
- (void)removeRecent:(id)a0;

@end
