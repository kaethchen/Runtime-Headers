@class NSError, BYRequest;

@interface BYOperation : NSOperation

@property (retain) BYRequest *request;
@property BOOL isFinished;
@property (retain) NSError *error;
@property (readonly) BOOL required;

- (void).cxx_destruct;
- (void)start;
- (id)initWithRequest:(id)a0;
- (void)cleanUpAfterSuccess:(BOOL)a0;

@end
