@class NSDictionary;

@interface _AMKeynote5Item : SBObject

@property (copy) NSDictionary *properties;

- (void)start;
- (void)advance;
- (void)delete;
- (void)moveTo:(id)a0;
- (BOOL)exists;
- (void)resumeSlideshow;
- (void)pauseSlideshow;
- (void)addChartColumnNames:(id)a0 data:(long long)a1 groupBy:(int)a2 rowNames:(id)a3 type:(int)a4;
- (void)addFilePath:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)makeImageSlidesPaths:(id)a0 master:(id)a1 setTitles:(BOOL)a2;
- (void)saveAs:(id)a0 in:(id)a1;
- (void)showNext;
- (void)showPrevious;
- (void)startFrom;
- (void)stopSlideshow;

@end
