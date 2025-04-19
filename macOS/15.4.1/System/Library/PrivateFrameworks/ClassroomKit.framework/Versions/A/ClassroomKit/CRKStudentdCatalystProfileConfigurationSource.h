@class NSString;
@protocol CRKRequestPerformingProtocol;

@interface CRKStudentdCatalystProfileConfigurationSource : NSObject <CRKConfigurationSource>

@property (readonly, nonatomic) id<CRKRequestPerformingProtocol> studentDaemonProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)fetchConfiguration:(id /* block */)a0;
- (void)fetchConfigurationOperationDidFinish:(id)a0 completion:(id /* block */)a1;
- (id)initWithStudentDaemonProxy:(id)a0 callbackQueue:(id)a1;
- (void)setConfiguration:(id)a0 completion:(id /* block */)a1;

@end
