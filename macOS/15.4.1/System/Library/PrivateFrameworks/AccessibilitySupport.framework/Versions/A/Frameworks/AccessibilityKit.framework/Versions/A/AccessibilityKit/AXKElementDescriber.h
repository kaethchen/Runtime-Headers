@class AXKElementDescriberConfiguration;

@interface AXKElementDescriber : NSObject

@property (retain, nonatomic) AXKElementDescriberConfiguration *configuration;

+ (BOOL)childrenDescriptionUsedForDescriptionOfElementWithRole:(id)a0;
+ (BOOL)willUseChildrenDescriptionInDescriptionForElement:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)_attachmentDescriptionForAttributedString:(id)a0 forContainingElement:(id)a1 type:(long long)a2 singleCharCheck:(BOOL)a3;
- (id)_delimiterStringForType:(long long)a0;
- (id)_descriptionForAttributedString:(id)a0 forContainingElement:(id)a1 type:(long long)a2 singleCharCheck:(BOOL)a3;
- (id)_descriptionForChildrenOfElement:(id)a0 type:(long long)a1 singleCharCheck:(BOOL)a2;
- (id)_descriptionForElement:(id)a0 type:(long long)a1 singleCharCheck:(BOOL)a2;
- (id)_descriptionForElement:(id)a0 type:(long long)a1 visitedSet:(id)a2 singleCharCheck:(BOOL)a3;
- (id)_descriptionOfParentIfApplicable:(id)a0;
- (id)_descriptionOfType:(long long)a0 forUIElement:(id)a1 singleCharCheck:(BOOL)a2;
- (id)_getAttributeValueForElement:(id)a0 attributeName:(id)a1;
- (void)_mutateDescription:(id)a0 appendString:(id)a1 withPause:(BOOL)a2 type:(long long)a3;
- (void)_mutateDescription:(id)a0 appendSubtextString:(id)a1 type:(long long)a2;
- (id)_pauseStringForType:(long long)a0;
- (id)attributedDescriptionForElement:(id)a0 type:(long long)a1;
- (id)attributedDescriptionOfType:(long long)a0 forElement:(id)a1;
- (id)descriptionForElement:(id)a0 type:(long long)a1;
- (id)descriptionOfType:(long long)a0 forElement:(id)a1;
- (BOOL)hasDescriptionOfType:(long long)a0 forElement:(id)a1;

@end
