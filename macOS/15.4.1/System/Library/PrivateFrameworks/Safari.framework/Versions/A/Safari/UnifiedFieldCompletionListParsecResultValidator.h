@class NSString, NSMutableSet;

@interface UnifiedFieldCompletionListParsecResultValidator : NSObject <UnifiedFieldCompletionListParsecResultValidation> {
    NSMutableSet *_validatedResultIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isSFSearchResultValid:(id)a0;
- (BOOL)_validateSimpleResult:(id)a0 withSession:(id)a1;
- (void)resetValidationState;
- (BOOL)validateParsecResult:(id)a0 withSession:(id)a1;

@end
