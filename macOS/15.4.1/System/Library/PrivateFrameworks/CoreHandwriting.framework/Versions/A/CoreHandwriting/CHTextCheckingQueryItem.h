@class NSSet, NSArray, NSTextCheckingResult;

@interface CHTextCheckingQueryItem : NSObject {
    long long _textCheckingResultGrammarDetailIndex;
}

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) int textCheckingResultType;
@property (readonly, nonatomic) NSTextCheckingResult *textCheckingResult;
@property (readonly, nonatomic) struct CGPath { } *estimatedBaseline;
@property (readonly, nonatomic) NSArray *replacementStrings;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })replacementRange;
- (BOOL)isEqualToTextCheckingQueryItem:(id)a0;
- (BOOL)isEquivalentToTextCheckingQueryItem:(id)a0;

@end
