@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)rangeAtIndex:(unsigned long long)a0;
- (unsigned long long)rangeCount;
- (void)addRange:(id)a0;
- (id)rules;
- (void)addRule:(id)a0;
- (BOOL)isApplyToDate;
- (id)ruleAtIndex:(unsigned long long)a0;
- (unsigned long long)ruleCount;

@end
