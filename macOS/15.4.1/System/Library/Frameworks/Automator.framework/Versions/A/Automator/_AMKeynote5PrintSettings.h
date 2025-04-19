@class NSString, NSDate;

@interface _AMKeynote5PrintSettings : SBObject

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
