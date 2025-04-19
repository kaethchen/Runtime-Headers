@class SIComponentIdentifier, NSString;

@interface SISchemaTopLevelUnionType : SISchemaInstrumentationMessage <SISchemaProvisional>

@property (class, readonly, nonatomic) int joinability;

@property (readonly, nonatomic) SIComponentIdentifier *componentIdentifier;
@property (readonly, nonatomic) int componentName;
@property (readonly, nonatomic) int clockIsolationLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getVersion;
- (BOOL)isProvisional;
- (int)getAnyEventType;
- (id)getComponentId;
- (int)getComponentName;
- (id)getRequestLinkInfo;
- (id)getTypeId;
- (id)qualifiedMessageName;
- (id)wrapAsAnyEvent;

@end
