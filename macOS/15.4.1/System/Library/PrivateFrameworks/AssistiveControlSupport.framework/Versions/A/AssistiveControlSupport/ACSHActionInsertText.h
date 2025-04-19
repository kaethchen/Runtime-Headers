@class NSString, ACAPWordSuggestion;

@interface ACSHActionInsertText : ACSHAction

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSString *string;
@property (retain, nonatomic) ACAPWordSuggestion *wordSuggestion;

+ (id)actionWithString:(id)a0;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)paramDescription;
- (void)performWithEventSourceData:(id)a0;

@end
