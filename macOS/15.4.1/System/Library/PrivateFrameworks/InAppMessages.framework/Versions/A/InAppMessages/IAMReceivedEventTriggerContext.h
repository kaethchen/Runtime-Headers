@class NSString;
@protocol IAMEventProtocol;

@interface IAMReceivedEventTriggerContext : NSObject <IAMTriggerContext>

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) id<IAMEventProtocol> event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 bundleIdentifier:(id)a1;
- (BOOL)satisfiesPresentationTrigger:(id)a0;

@end
