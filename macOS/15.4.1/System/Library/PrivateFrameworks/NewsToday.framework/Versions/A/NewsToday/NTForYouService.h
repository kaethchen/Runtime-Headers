@protocol FCContentContext;

@interface NTForYouService : NSObject <NTForYouServiceType>

@property (readonly, nonatomic) id<FCContentContext> contentContext;

- (void).cxx_destruct;
- (id)initWithContentContext:(id)a0;
- (void)fetchForYouWithRequest:(id)a0 configuration:(id)a1 fetchDate:(id)a2 completionHandler:(id /* block */)a3;

@end
