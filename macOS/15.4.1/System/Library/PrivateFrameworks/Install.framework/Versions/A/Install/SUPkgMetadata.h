@class NSString, NSDictionary, IFInstallPlan, NSArray;

@interface SUPkgMetadata : NSObject {
    NSDictionary *_infoDictionary;
    NSString *_identifier;
    NSString *_version;
    NSString *_buildVersion;
    int _restartAction;
    IFInstallPlan *_actionPlan;
    NSArray *_searches;
}

+ (int)restartActionWithString:(id)a0;

- (void)dealloc;
- (id)identifier;
- (id)initWithData:(id)a0;
- (id)version;
- (id)infoDictionary;
- (id)buildVersion;
- (int)restartAction;
- (id)_actionPlanForTarget:(id)a0;
- (id)_elementWithName:(id)a0 fromNode:(id)a1;
- (id)_actionPlan;
- (BOOL)_loadFromNSXMLElement:(id)a0;
- (void)_loadInfoPlistData:(id)a0;
- (BOOL)performRequirementChecksOnVolume:(id)a0;

@end
