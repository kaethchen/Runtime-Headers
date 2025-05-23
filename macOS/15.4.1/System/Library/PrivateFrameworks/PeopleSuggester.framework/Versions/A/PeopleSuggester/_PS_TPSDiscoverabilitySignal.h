@class NSString;

@interface _PS_TPSDiscoverabilitySignal : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *context;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)donateSignalWithCompletion:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 context:(id)a2;
- (id)_knowledgeStore;

@end
