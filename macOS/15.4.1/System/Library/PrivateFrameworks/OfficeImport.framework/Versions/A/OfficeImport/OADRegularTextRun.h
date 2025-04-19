@class NSMutableString;

@interface OADRegularTextRun : OADTextRun {
    NSMutableString *mText;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)text;
- (unsigned long long)characterCount;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
