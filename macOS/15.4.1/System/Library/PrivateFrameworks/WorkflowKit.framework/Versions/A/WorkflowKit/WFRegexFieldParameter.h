@class NSString;

@interface WFRegexFieldParameter : WFTextInputParameter

@property (readonly, nonatomic) NSString *localizedIncompleteHintString;

- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)hintForState:(id)a0;

@end
