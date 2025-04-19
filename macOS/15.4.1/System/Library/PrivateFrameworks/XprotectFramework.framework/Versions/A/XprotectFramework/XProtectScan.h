@class NSDictionary, NSURL, NSData, NSXPCConnection, NSDate;

@interface XProtectScan : NSObject <XprotectClientProtocol> {
    NSData *_fileData;
    NSDictionary *_lsProperties;
    id /* block */ _feedbackHandler;
    id /* block */ _resultsHandler;
    NSXPCConnection *_xpc;
    NSDate *_scanStartTime;
}

@property (retain) NSURL *fileURL;
@property (nonatomic) BOOL requireInProcess;
@property BOOL continueOnError;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithURL:(id)a0;
- (id)beginAnalysisWithFeedback:(id /* block */)a0;
- (BOOL)beginAnalysisWithResultsHandler:(id /* block */)a0 feedback:(id /* block */)a1;
- (void)didReceiveFeedbackOfType:(id)a0 withInformation:(id)a1;
- (void)didReceiveProgress:(long long)a0 total:(long long)a1;

@end
