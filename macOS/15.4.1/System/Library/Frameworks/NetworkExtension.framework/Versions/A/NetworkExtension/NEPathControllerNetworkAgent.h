@class NSString, NSMutableArray;

@interface NEPathControllerNetworkAgent : NENetworkAgent {
    BOOL updateClientsImmediately;
    id /* block */ _internalAssertHandler;
    id /* block */ _internalUnassertHandler;
}

@property (retain) NSMutableArray *predictedInterfaceArray;
@property (retain) NSMutableArray *advisoryInterfaceArray;
@property (retain) NSString *advisoryAgentDomain;
@property (retain) NSString *advisoryAgentType;
@property BOOL weakAdvisory;
@property BOOL noAdvisoryTimer;
@property BOOL preferAdvisory;
@property (nonatomic) BOOL isForcedAdvisory;

+ (id)agentFromData:(id)a0;
+ (id)agentType;

- (void).cxx_destruct;
- (BOOL)assertAgentWithOptions:(id)a0;
- (id)copyAgentData;
- (void)unassertAgentWithOptions:(id)a0;
- (BOOL)updateClientsImmediately;
- (id)initWithAdvisoryAgentDomain:(id)a0 agentType:(id)a1 advisoryMode:(unsigned long long)a2;
- (id)initWithAdvisoryInterface:(id)a0 advisoryMode:(unsigned long long)a1;
- (void)setAssertHandler:(id /* block */)a0;
- (void)setUnassertHandler:(id /* block */)a0;
- (void)setUpdateClientsImmediately:(BOOL)a0;

@end
