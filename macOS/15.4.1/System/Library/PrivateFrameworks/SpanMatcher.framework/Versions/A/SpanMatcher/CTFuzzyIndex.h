@class PCTDFA, NSMutableDictionary;

@interface CTFuzzyIndex : NSObject {
    PCTDFA *_CTindex;
    NSMutableDictionary *_CTdata;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setMode:(int)a0;
- (int)getMode;
- (void)addString:(id)a0;
- (id)_CTcreateDFAFromNFA:(id)a0;
- (id)_CTcreateNFAWithWord:(id)a0 withMaxDistance:(long long)a1;
- (id)_CTcreateFollowingState:(id)a0 withState:(id)a1 withSymbol:(id)a2;
- (void)addString:(id)a0 withData:(id)a1;
- (void)addWordsFromString:(id)a0 data:(id)a1;
- (id)initAtPath:(id)a0;
- (id)search:(id)a0 withMaxDistance:(long long)a1;

@end
