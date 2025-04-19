@class NSArray, NSString;
@protocol STStatusDomainClientHandle;

@interface STStatusDomainClientHandleWrapper : NSObject <STStatusDomainClientHandle>

@property (readonly, weak, nonatomic) id<STStatusDomainClientHandle> wrappedClientHandle;
@property (readonly, copy, nonatomic) NSArray *preferredLocalizations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;
- (id)initWithWrappedClientHandle:(id)a0 preferredLocalizations:(id)a1;

@end
