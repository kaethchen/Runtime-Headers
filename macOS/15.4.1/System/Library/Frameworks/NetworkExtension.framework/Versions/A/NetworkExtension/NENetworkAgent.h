@class NSUUID, NSString, NSObject;
@protocol NENetworkAgentErrorDelegate;

@interface NENetworkAgent : NSObject <NWNetworkAgent, NENetworkAgentErrorDelegate> {
    int _internalSessionType;
    NSUUID *_internalUUID;
    NSString *_name;
    id /* block */ _internalStartHandler;
    NSObject<NENetworkAgentErrorDelegate> *_delegate;
}

@property (readonly, copy) NSUUID *configurationUUID;
@property (copy) NSString *configurationName;
@property (readonly) int sessionType;
@property int lastStatus;
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
- (void)setStartHandler:(id /* block */)a0;
- (id)copyAgentData;
- (BOOL)reportError:(int)a0 withOptions:(id)a1;
- (BOOL)startAgentWithOptions:(id)a0;
- (id)initWithConfigUUID:(id)a0 sessionType:(int)a1 name:(id)a2;
- (id)initWithDelegate:(id)a0 configUUID:(id)a1 sessionType:(int)a2 name:(id)a3;
- (BOOL)matchesFileHandle:(id)a0;

@end
