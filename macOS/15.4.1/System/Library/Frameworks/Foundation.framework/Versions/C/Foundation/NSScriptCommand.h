@class NSScriptObjectSpecifier, NSDictionary, NSScriptCommandDescription, NSAppleEventDescriptor, NSString, NSMutableDictionary;

@interface NSScriptCommand : NSObject <NSCoding> {
    NSScriptCommandDescription *_commandDescription;
    id _directParameter;
    NSScriptObjectSpecifier *_receiversSpecifier;
    id _evaluatedReceivers;
    NSDictionary *_arguments;
    NSMutableDictionary *_evaluatedArguments;
    struct { unsigned char hasEvaluatedReceivers : 1; unsigned char hasEvaluatedArguments : 1; unsigned int RESERVED : 30; } _flags;
    id _moreVars;
    void *_reserved;
}

@property (readonly, retain) NSScriptCommandDescription *commandDescription;
@property (retain) id directParameter;
@property (retain) NSScriptObjectSpecifier *receiversSpecifier;
@property (readonly, retain) id evaluatedReceivers;
@property (copy) NSDictionary *arguments;
@property (readonly, copy) NSDictionary *evaluatedArguments;
@property (readonly, getter=isWellFormed) BOOL wellFormed;
@property long long scriptErrorNumber;
@property (retain) NSAppleEventDescriptor *scriptErrorOffendingObjectDescriptor;
@property (retain) NSAppleEventDescriptor *scriptErrorExpectedTypeDescriptor;
@property (copy) NSString *scriptErrorString;
@property (readonly, copy) NSAppleEventDescriptor *appleEvent;

+ (id)_argumentValueFromParameterDescriptor:(id)a0 usingTypeDescription:(id)a1;
+ (id)_commandFromEvent:(id)a0;
+ (id)_commandFromEvent:(id)a0 inConstructionContext:(id)a1;
+ (BOOL)_getArguments:(id)a0 withParameters:(struct { id x0; id x1; id x2; id x3; })a1;
+ (BOOL)_getReceiversSpecifierOrUnnamedArgument:(id *)a0 fromEvent:(id)a1 usingDescription:(id)a2;
+ (id)currentCommand;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)evaluatedValueForArgumentValue:(id)a0;
- (BOOL)_allowsAccessForEvent:(id)a0;
- (BOOL)_allowsAccessForEventParameters:(id)a0 givenSenderAccessGroups:(id)a1;
- (BOOL)_allowsAccessToSpecifier:(id)a0 writable:(BOOL)a1 givenAccessGroups:(id)a2;
- (void)_populateReplyAppleEventWithResult:(id)a0;
- (void)_resumeExecutionWithResult:(id)a0;
- (id)_scriptErrorExpectedTypeDescriptor;
- (id)_scriptErrorOffendingObjectDescriptor;
- (void)_sendToRemainingReceivers;
- (BOOL)_setAdditionalThingsFromEvent:(id)a0;
- (void)_setAppleEventHandling:(id)a0;
- (void)_setScriptErrorExpectedType:(unsigned int)a0;
- (void)_setScriptErrorExpectedTypeDescriptor:(id)a0;
- (void)_setScriptErrorFromKVCException:(id)a0;
- (void)_setScriptErrorOffendingObjectDescriptor:(id)a0;
- (id)executeCommand;
- (id)initWithCommandDescription:(id)a0;
- (id)performDefaultImplementation;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)resumeExecutionWithResult:(id)a0;
- (void)suspendExecution;

@end
