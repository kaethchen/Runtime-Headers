@interface _AMiPhoto5Item : SBObject

- (void)select;
- (id)objectClass;
- (id)properties;
- (void)setProperties:(id)a0;
- (void)removeFrom:(id)a0;
- (void)delete;
- (void)moveTo:(id)a0;
- (BOOL)exists;
- (void)addTo:(id)a0;
- (void)emptyTrash;
- (void)assignKeywordString:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)importFrom:(id)a0 to:(id)a1;
- (void)newAlbumName:(id)a0;
- (void)quitSaving:(int)a0;
- (void)saveAs:(id)a0 in_:(id)a1;
- (void)startSlideshowUsingAlbum:(id)a0;
- (void)stopSlideshow;

@end
