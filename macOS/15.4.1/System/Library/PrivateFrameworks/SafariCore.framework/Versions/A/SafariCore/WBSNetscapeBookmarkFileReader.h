@class NSString, NSMutableString, NSError;
@protocol WBSNetscapeBookmarkFileReaderDelegate;

@interface WBSNetscapeBookmarkFileReader : NSObject {
    NSMutableString *_accumulatedText;
    NSString *_bookmarkListTitle;
    NSString *_bookmarkListIdentifier;
    NSString *_bookmarkLeafURL;
    NSError *_error;
}

@property (weak) id<WBSNetscapeBookmarkFileReaderDelegate> delegate;

+ (BOOL)looksLikeBookmarkFile:(id)a0;

- (void).cxx_destruct;
- (void)_handleText:(id)a0;
- (void)_handleError:(id)a0;
- (void)_handleStartElement:(id)a0 attributes:(id)a1;
- (void)_handleDoctype:(id)a0;
- (void)_handleEndElement:(id)a0;
- (BOOL)readFromFileHandle:(id)a0 error:(id *)a1;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;

@end
