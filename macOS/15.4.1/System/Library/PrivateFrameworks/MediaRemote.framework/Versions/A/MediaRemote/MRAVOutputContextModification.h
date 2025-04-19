@class MRGroupTopologyModificationRequest;

@interface MRAVOutputContextModification : NSObject

@property (class, copy, nonatomic) id /* block */ modifyOutputContextImplementation;

@property (readonly, nonatomic) MRGroupTopologyModificationRequest *request;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)modifyWithOutputContext:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
