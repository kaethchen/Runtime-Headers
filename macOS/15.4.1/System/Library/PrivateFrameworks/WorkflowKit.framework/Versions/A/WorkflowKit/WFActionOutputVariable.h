@class NSString, WFAction;
@protocol WFVariableProvider;

@interface WFActionOutputVariable : WFVariable {
    id<WFVariableProvider> _variableProvider;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *outputUUID;
@property (readonly, weak, nonatomic) WFAction *action;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)UUID;
- (BOOL)isRenamed;
- (id)defaultName;
- (id)icon;
- (BOOL)isAvailable;
- (id)variableBySettingAggrandizements:(id)a0;
- (id)variableProvider;
- (id)initWithOutputUUID:(id)a0 outputName:(id)a1 variableProvider:(id)a2 aggrandizements:(id)a3;
- (id)initWithAction:(id)a0 variableProvider:(id)a1 aggrandizements:(id)a2;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (id)possibleContentClassesWithContext:(id)a0;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (void)variableProvider:(id)a0 variableNameDidChangeTo:(id)a1;

@end
