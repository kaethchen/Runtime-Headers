@class CMLPIRConfig, NSString, NSXPCConnection, NSObject, CMLClientConfig;
@protocol OS_dispatch_queue;

@interface CMLPIRClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy, nonatomic) NSString *useCase;
@property (readonly, copy, nonatomic) CMLClientConfig *clientConfig;
@property (readonly, copy, nonatomic) CMLPIRConfig *pirConfig;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithClientConfig:(id)a0;
- (id)generateEvaluationKey:(id *)a0;
- (id)initWithClientConfig:(id)a0 dispatchQueue:(id)a1;
- (id)initWithClientConfig:(id)a0 dispatchQueue:(id)a1 connection:(id)a2;
- (id)setPIRConfig:(id)a0 error:(id *)a1;

@end
