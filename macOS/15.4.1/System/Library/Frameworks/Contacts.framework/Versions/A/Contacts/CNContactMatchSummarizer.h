@interface CNContactMatchSummarizer : NSObject {
    struct __CFStringTokenizer { } *_tokenizer;
}

+ (id)log;
+ (id)keyDescriptorForContactIdentifiers:(id)a0 matchInfos:(id)a1;
+ (id)summaryProperties;
+ (id)summaryPropertyForMatchInfo:(id)a0;

- (void)dealloc;
- (id)init;
- (id)attributedStringForPropertyValueString:(id)a0 queryTerms:(id)a1 outMatchCount:(unsigned long long *)a2;
- (id)summariesFutureForContactsIdentifiers:(id)a0 matchInfos:(id)a1 contactStore:(id)a2 scheduler:(id)a3;
- (id)summaryForContact:(id)a0 matchInfo:(id)a1;

@end
