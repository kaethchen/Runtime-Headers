@class NSArray, NSString, NSDate;

@interface _AMiTunes8PrintSettings : SBObject

@property (readonly) long long copies;
@property (readonly) BOOL collating;
@property (readonly) long long startingPage;
@property (readonly) long long endingPage;
@property (readonly) long long pagesAcross;
@property (readonly) long long pagesDown;
@property (readonly) int errorHandling;
@property (readonly, copy) NSDate *requestedPrintTime;
@property (readonly, copy) NSArray *printerFeatures;
@property (readonly, copy) NSString *faxNumber;
@property (readonly, copy) NSString *targetPrinter;

- (void)close;
- (void)open;
- (void)delete;
- (BOOL)exists;
- (id)duplicateTo:(id)a0;
- (void)playOnce:(BOOL)a0;
- (void)printPrintDialog:(BOOL)a0 withProperties:(id)a1 kind:(int)a2 theme:(id)a3;

@end
