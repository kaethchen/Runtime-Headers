@class NSString, NSError;

@interface _TtCC24IntelligencePlatformCore18GraphSimulationXPC6Server : NSObject <GDGraphSimulationXPCProtocol>

- (id)init;
- (void)mockTripleEntityTaggingWithContactId:(NSString *)a0 inferredRelationshipLabel:(NSString *)a1 completion:(void (^)(BOOL, NSError *))a2;

@end
