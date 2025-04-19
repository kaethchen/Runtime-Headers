@class NSString, OSInstallOptions;

@interface OSIDebuggerTool : NSObject

@property (retain) OSInstallOptions *options;
@property (retain) NSString *opToFail;
@property BOOL shouldFailAtStart;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (BOOL)loadDebuggerPropertyList;
- (BOOL)shouldFailAtQueueElement:(id)a0;

@end
