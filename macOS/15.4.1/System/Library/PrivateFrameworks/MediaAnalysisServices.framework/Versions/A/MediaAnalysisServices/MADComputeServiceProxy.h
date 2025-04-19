@class MADComputeService;

@interface MADComputeServiceProxy : NSObject <MADComputeServiceClientProtocol> {
    MADComputeService *_coordinator;
}

- (void).cxx_destruct;
- (id)initWithCoordinator:(id)a0;
- (void)handleResults:(id)a0 assetRepresentation:(id)a1 requestID:(id)a2 error:(id)a3 acknowledgement:(id /* block */)a4;
- (void)reportProgress:(double)a0 requestID:(id)a1;

@end
