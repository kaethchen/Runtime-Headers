@class NSString, NSDate;

@interface _AMiPhoto6PrintSettings : SBObject

@property long long copies;
@property BOOL collating;
@property long long startingPage;
@property long long endingPage;
@property long long pagesAcross;
@property long long pagesDown;
@property (copy) NSDate *requestedPrintTime;
@property int errorHandling;
@property (copy) NSString *faxNumber;
@property (copy) NSString *targetPrinter;

- (void)select;
- (void)removeFrom:(id)a0;
- (void)delete;
- (void)moveTo:(id)a0;
- (BOOL)exists;
- (void)addTo:(id)a0;
- (void)emptyTrash;
- (void)resumeSlideshow;
- (void)pauseSlideshow;
- (void)assignKeywordString:(id)a0;
- (void)autoImport;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)importFrom:(id)a0 forceCopy:(long long)a1 to:(id)a2;
- (id)newAlbumName:(id)a0;
- (void)nextSlide;
- (void)previousSlide;
- (void)saveAs:(id)a0 in:(id)a1;
- (void)startSlideshowAsynchronous:(long long)a0 displayIndex:(long long)a1 iChat:(long long)a2 usingAlbum:(id)a3;
- (void)stopSlideshow;

@end
