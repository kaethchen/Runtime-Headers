@class NSURL, NSMutableDictionary, NSXPCConnection;

@interface XProtectAnalysis : NSObject <XprotectClientProtocol> {
    NSMutableDictionary *_lsProperties;
    id /* block */ _feedback;
    id /* block */ _results;
    NSXPCConnection *_xpc;
}

@property (retain) NSURL *fileURL;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)beginAnalysisWithDelegate:(id)a0 didEndSelector:(SEL)a1 contextInfo:(void *)a2;
- (BOOL)beginAnalysisWithDelegate:(id)a0 didEndSelector:(SEL)a1 contextInfo:(void *)a2 feedback:(id /* block */)a3;
- (BOOL)beginAnalysisWithHandler:(id /* block */)a0 contextInfo:(void *)a1;
- (BOOL)beginAnalysisWithHandler:(id /* block */)a0 contextInfo:(void *)a1 feedback:(id /* block */)a2;
- (void)didReceiveFeedbackOfType:(id)a0 withInformation:(id)a1;
- (void)didReceiveProgress:(long long)a0 total:(long long)a1;
- (id)initWithURL:(id)a0 withProperties:(id)a1;

@end
