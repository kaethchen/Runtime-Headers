@class NSUUID, NSString, NSURL, HKTaskConfiguration;

@interface HKTaskServerProxyProvider : HKProxyProvider {
    NSUUID *_instanceUUID;
}

@property (readonly, copy, nonatomic) NSUUID *taskUUID;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (copy, nonatomic) NSURL *pluginURL;
@property (copy) HKTaskConfiguration *taskConfiguration;

- (void).cxx_destruct;
- (id)debugIdentifier;
- (void)fetchProxyServiceEndpointFromSource:(id)a0 serviceIdentifier:(id)a1 endpointHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (id)initWithHealthStore:(id)a0 taskIdentifier:(id)a1 exportedObject:(id)a2 exportedInterface:(id)a3 remoteInterface:(id)a4 taskUUID:(id)a5;
- (id)initWithHealthStore:(id)a0 taskIdentifier:(id)a1 exportedObject:(id)a2 taskUUID:(id)a3;
- (id)proxyServiceEndpointFromSource:(id)a0 serviceIdentifier:(id)a1 error:(id *)a2;

@end
