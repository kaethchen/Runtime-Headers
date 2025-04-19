@class NSScriptClassDescription, NSDictionary;

@interface NSCreateCommand : NSScriptCommand {
    id _moreVars2;
}

@property (readonly, retain) NSScriptClassDescription *createClassDescription;
@property (readonly, copy) NSDictionary *resolvedKeyDictionary;

+ (BOOL)_getArguments:(id)a0 withParameters:(struct { id x0; id x1; id x2; id x3; })a1;

- (void)dealloc;
- (id)description;
- (BOOL)_allowsAccessForEventParameters:(id)a0 givenSenderAccessGroups:(id)a1;
- (id)_newObjectForContainer:(id)a0 inValueForKey:(id)a1 withClassDescription:(id)a2;
- (BOOL)_setAdditionalThingsFromEvent:(id)a0;
- (id)initWithCommandDescription:(id)a0;
- (id)performDefaultImplementation;

@end
