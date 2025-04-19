@class NSUUID, NSString, NSArray, BMAppIntentInvocationActionOutputDialog, NSData, BMAppIntentInvocationAction, BMAppIntentInvocationActionOutputConfirmationActionName, BMAppIntentInvocationValue;

@interface BMAppIntentInvocationActionOutput : BMEventBase <BMStoreData> {
    NSData *_raw_identifier;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BMAppIntentInvocationAction *showOutputAction;
@property (readonly, nonatomic) int showOutputActionHint;
@property (readonly, nonatomic) BMAppIntentInvocationActionOutputDialog *dialog;
@property (readonly, nonatomic) BMAppIntentInvocationValue *value;
@property (readonly, nonatomic) BMAppIntentInvocationAction *nextAction;
@property (readonly, nonatomic) BMAppIntentInvocationActionOutputConfirmationActionName *confirmationActionName;
@property (readonly, nonatomic) BOOL showPrompt;
@property (nonatomic) BOOL hasShowPrompt;
@property (readonly, nonatomic) NSArray *suggestedFollowUpActions;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)_suggestedFollowUpActionsJSONArray;
- (id)initWithIdentifier:(id)a0 showOutputAction:(id)a1 showOutputActionHint:(int)a2 dialog:(id)a3 value:(id)a4 nextAction:(id)a5 confirmationActionName:(id)a6 showPrompt:(id)a7;
- (id)initWithIdentifier:(id)a0 showOutputAction:(id)a1 showOutputActionHint:(int)a2 dialog:(id)a3 value:(id)a4 nextAction:(id)a5 confirmationActionName:(id)a6 showPrompt:(id)a7 suggestedFollowUpActions:(id)a8;

@end
