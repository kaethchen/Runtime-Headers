@class NSError, NSString, MSVArtworkServiceRequest;

@interface MSVArtworkServiceOperation : NSOperation {
    NSError *_operationError;
    NSString *_debugMessage;
}

@property (readonly, nonatomic) MSVArtworkServiceRequest *request;
@property (readonly, nonatomic) NSError *operationError;
@property (readonly, copy, nonatomic) NSString *debugMessage;

- (void).cxx_destruct;
- (void)setOperationError:(id)a0;
- (id)initWithArtworkRequest:(id)a0;
- (void)setDebugMessage:(id)a0;

@end
