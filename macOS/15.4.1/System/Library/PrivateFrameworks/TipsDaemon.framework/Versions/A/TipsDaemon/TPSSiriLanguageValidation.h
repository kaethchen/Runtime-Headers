@class NSArray;

@interface TPSSiriLanguageValidation : TPSInclusivityValidation

@property (readonly, nonatomic) NSArray *targetLanguages;
@property (readonly, nonatomic) NSArray *excludeLanguages;

- (id)initWithTargetLanguages:(id)a0 excludeLanguages:(id)a1;
- (void)validateWithCompletion:(id /* block */)a0;

@end
