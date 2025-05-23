@class WFDisambiguationCollectionFilter, NSString;

@interface WFAskEachTimeVariable : WFVariable

@property (retain, nonatomic) WFDisambiguationCollectionFilter *collectionFilter;
@property (readonly, nonatomic) NSString *prompt;

- (id)init;
- (id)name;
- (void).cxx_destruct;
- (id)icon;
- (BOOL)isAvailable;
- (id)initWithPrompt:(id)a0;
- (BOOL)supportsAggrandizements;
- (id)initWithCollectionFilter:(id)a0;
- (id)initWithPrompt:(id)a0 collectionFilter:(id)a1;
- (BOOL)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;

@end
