@class MCTaskHandler, NSError, NSString;

@interface MCTaskHandlerOperation : NSOperation

@property (retain) MCTaskHandler *handler;
@property BOOL succeeded;
@property (retain) NSError *error;
@property (copy) NSString *logPrefix;

- (void).cxx_destruct;

@end
