@class NSURL, NSString;

@interface NRNewsURLResolutionOperation : FCOperation <NRURLResolutionOperation>

@property (readonly, copy, nonatomic) NSURL *newsURL;
@property (copy, nonatomic) NSURL *resultWebURL;
@property (copy, nonatomic) id /* block */ resolutionCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (id)initWithNewsURL:(id)a0;

@end
