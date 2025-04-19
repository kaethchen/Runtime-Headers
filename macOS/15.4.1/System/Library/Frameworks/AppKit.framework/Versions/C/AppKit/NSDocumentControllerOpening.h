@class NSDocument, NSString, QLSeamlessDocumentOpener, NSURL, NSError;

@interface NSDocumentControllerOpening : NSObject

@property (retain) NSURL *url;
@property (retain) QLSeamlessDocumentOpener *seamlessOpener;
@property (retain) NSDocument *document;
@property BOOL documentWasAlreadyOpen;
@property (retain) NSError *error;
@property (retain) NSString *recentDocumentRecordsKey;

- (void).cxx_destruct;

@end
