@class NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRControllerWrapperRevokeHandlerInfo : NSObject

@property (readonly, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0 queue:(id)a1;

@end
