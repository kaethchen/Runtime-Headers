@class NSString, TransparencyApplication;

@interface KTStatus : NSObject <KTStatusProtocol>

@property (retain) TransparencyApplication *application;
@property (readonly) NSString *applicationIdentifier;

- (void).cxx_destruct;
- (id)status:(id *)a0;
- (id)initWithApplication:(id)a0;
- (void)errorForFailedEvent:(id)a0 completionBlock:(id /* block */)a1;
- (void)errorsForFailedEvents:(id)a0 completionBlock:(id /* block */)a1;
- (void)getCurrentStatus:(id /* block */)a0;
- (void)getSelfStatus:(id /* block */)a0;
- (void)getStatus:(id /* block */)a0;
- (void)ignoreFailedEvent:(id)a0 completionBlock:(id /* block */)a1;
- (void)ignoreFailedEvents:(id)a0 completionBlock:(id /* block */)a1;

@end
