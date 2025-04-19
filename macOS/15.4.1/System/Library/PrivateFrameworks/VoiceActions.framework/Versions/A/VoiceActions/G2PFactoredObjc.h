@interface G2PFactoredObjc : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ g2p;
}

- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (id)getPhrasePronounciationWithPhrase:(id)a0 wordSep:(id)a1 prefixWithPhrase:(BOOL)a2;
- (id)getPronounciationWithWord:(id)a0;

@end
