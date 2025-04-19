@class NSMutableData, NSData, MultipartMessageHeader;
@protocol MultipartFormDataParserDelegate;

@interface MultipartFormDataParser : NSObject {
    NSMutableData *pendingData;
    NSData *boundaryData;
    MultipartMessageHeader *currentHeader;
    BOOL waitingForCRLF;
    BOOL reachedEpilogue;
    BOOL processedPreamble;
    BOOL checkForContentEnd;
    int currentEncoding;
}

@property (weak) id<MultipartFormDataParserDelegate> delegate;
@property unsigned long long formEncoding;

+ (id)decodedDataFromData:(id)a0 encoding:(int)a1;
+ (id)decodedDataFromQuotedPrintableData:(id)a0;

- (void).cxx_destruct;
- (BOOL)appendData:(id)a0;
- (int)findContentEnd:(id)a0 fromOffset:(int)a1;
- (int)findHeaderEnd:(id)a0 fromOffset:(int)a1;
- (id)initWithBoundary:(id)a0 formEncoding:(unsigned long long)a1;
- (int)numberOfBytesToLeavePendingWithData:(id)a0 length:(unsigned long long)a1 encoding:(int)a2;
- (int)offsetTillNewlineSinceOffset:(int)a0 inData:(id)a1;
- (int)processPreamble:(id)a0;

@end
