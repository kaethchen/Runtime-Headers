@class NSLocale;

@interface CHCleanUpSpacesStep : CHPostprocessingStepModifyingOriginalTokens {
    NSLocale *_locale;
}

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)process:(id)a0 options:(id)a1;

@end
