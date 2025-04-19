@class NSObject;
@protocol OS_dispatch_queue;

@interface MLRDonationManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)record:(id)a0 data:(id)a1 encodingSchema:(id)a2 metadata:(id)a3 errorOut:(id *)a4;
- (void)encodeAndUploadToDediscoWithIdentifier:(id)a0 measurements:(id)a1 withEncodingSchemas:(id)a2 metadata:(id)a3 completion:(id /* block */)a4;

@end
