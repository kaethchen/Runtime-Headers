@class NSString;
@protocol IMKMacSpellChecker;

@interface IMKAppleSpellCandidateEngine : IMKCandidateEngine

@property (nonatomic) long long processID;
@property (nonatomic) long long spellDocumentTag;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) id<IMKMacSpellChecker> spellChecker;
@property (nonatomic) BOOL shouldLearn;

- (void).cxx_destruct;
- (void)preflight;
- (id)_candidateListFromChecker:(id)a0 withContext:(id)a1 cursorPosition:(long long)a2;
- (id)contentForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forCursorPosition:(long long)a1 inDocument:(id)a2;
- (void)generateCandidatesFor:(id)a0 onCompletion:(id /* block */)a1;
- (id)initWithSpellChecker:(id)a0;
- (unsigned long long)textCheckingTypes;

@end
