@class INIntentSlotDescription, INIntent, INExtensionContextSlotResolutionResult, NSString, NSArray;

@interface INIntentTestResolvedParameter : NSObject

@property (readonly) INExtensionContextSlotResolutionResult *extensionContextResolutionResult;
@property (readonly, copy) INIntent *intent;
@property (readonly) INIntentSlotDescription *slotDescription;
@property (readonly, copy) NSString *parameter;
@property (readonly) NSArray *results;
@property (readonly) BOOL resolveImplemented;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithParameter:(id)a0 forIntent:(id)a1 extensionContextResolutionResult:(id)a2;

@end
