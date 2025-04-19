@class NSString, NSUUID, NSObject, NWNetworkAgentRegistration;
@protocol NENexusAgentDelegate;

@interface NENexusAgent : NSObject <NWNetworkAgent> {
    unsigned int _frameType;
    NWNetworkAgentRegistration *_registration;
    NSObject<NENexusAgentDelegate> *_delegate;
}

@property (copy, nonatomic) NSString *agentDescription;
@property (copy, nonatomic) NSUUID *agentUUID;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isKernelActivated) BOOL kernelActivated;
@property (nonatomic, getter=isUserActivated) BOOL userActivated;
@property (nonatomic, getter=isVoluntary) BOOL voluntary;
@property (nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property (nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property (nonatomic, getter=isNexusProvider) BOOL nexusProvider;
@property (nonatomic) BOOL supportsListenRequests;
@property (nonatomic) BOOL supportsBrowseRequests;
@property (nonatomic) BOOL supportsResolveRequests;
@property (nonatomic) BOOL requiresAssert;
@property (nonatomic) BOOL updateClientsImmediately;

+ (id)agentDomain;
+ (id)agentFromData:(id)a0;
+ (id)agentType;

- (void).cxx_destruct;
- (BOOL)assertAgentWithOptions:(id)a0;
- (void)closeNexusWithOptions:(id)a0;
- (id)copyAgentData;
- (BOOL)requestNexusWithOptions:(id)a0;
- (BOOL)startAgentWithOptions:(id)a0;
- (void)unassertAgentWithOptions:(id)a0;

@end
