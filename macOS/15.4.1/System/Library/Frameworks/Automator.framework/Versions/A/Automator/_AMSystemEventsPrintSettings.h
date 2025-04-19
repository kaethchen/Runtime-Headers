@class NSString, NSDate;

@interface _AMSystemEventsPrintSettings : SBObject <_AMSystemEventsGenericMethods>

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

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
