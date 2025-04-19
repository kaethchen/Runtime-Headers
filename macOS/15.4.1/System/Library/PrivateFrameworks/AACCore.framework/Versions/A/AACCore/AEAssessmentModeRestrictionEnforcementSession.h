@class NSString, NSXPCListener;
@protocol AEAssessmentModeRestrictionEnforcer;

@interface AEAssessmentModeRestrictionEnforcementSession : NSObject <NSXPCListenerDelegate, AEInvalidatable> {
    NSString *_machServiceName;
    id<AEAssessmentModeRestrictionEnforcer> _enforcer;
    NSXPCListener *_xpcListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
