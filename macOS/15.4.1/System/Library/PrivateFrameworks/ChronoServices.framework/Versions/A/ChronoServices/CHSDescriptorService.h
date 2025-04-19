@class CHSChronoServicesConnection;

@interface CHSDescriptorService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)modifyDescriptorEnablement:(id)a0 completion:(id /* block */)a1;

@end
