@protocol WBSJSONReaderDelegate;

@interface WBSJSONReader : NSObject

@property (weak) id<WBSJSONReaderDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)parseURL:(id)a0 error:(id *)a1;
- (BOOL)parseData:(id)a0 error:(id *)a1;
- (BOOL)parseFileHandle:(id)a0 error:(id *)a1;

@end
