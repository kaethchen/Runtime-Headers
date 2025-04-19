@class NSString;

@interface IEIntelligence : NSObject

@property (nonatomic) void *mIntelligence;
@property (retain, nonatomic) NSString *mFlowId;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)processText:(id)a0;
- (BOOL)load:(id)a0;
- (void)setExtensions:(id)a0;
- (id)processEvent:(id)a0;
- (id)flowId;
- (id)activeEvents;
- (id)getBuildVersion;
- (BOOL)willHandleEvent:(id)a0;
- (id)getFormatVersion;
- (id)getMetadata:(id)a0;
- (BOOL)loadFromString:(id)a0;
- (id)getUndo;
- (id)activeLocalEvents;
- (id)find:(id)a0 withId:(id)a1;
- (id)findInTemplateDir:(id)a0 withId:(id)a1;
- (id)getActiveEventsWithScope:(int)a0;
- (id)getChangedPersistentVariables;
- (id)getConditions;
- (id)getEvents;
- (id)getExitValue;
- (id)getInputGroup:(id)a0;
- (id)getRemainingResponses;
- (id)getVariables;
- (id)goTo:(id)a0;
- (BOOL)hasActiveFallback;
- (BOOL)load:(id)a0 withFlowId:(id)a1;
- (BOOL)load:(id)a0 withId:(id)a1;
- (id)processActivity:(id)a0;
- (id)processDirectInvocation:(id)a0;
- (id)processText:(id)a0 withMode:(unsigned long long)a1 withFallback:(unsigned long long)a2;
- (BOOL)setVariable:(id)a0 withValue:(id)a1;
- (id)startConversation;
- (BOOL)willHandleDirectInvocation:(id)a0;

@end
