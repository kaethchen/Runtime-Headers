@class PPNamedEntityStore, PPContactStore, PPContactNameRecordLoadingDelegate, _ICLexiconManager, PPNamedEntityRecordLoadingDelegate;

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing, _ICFeedbackAccepting> {
    _ICLexiconManager *_manager;
    PPContactStore *_contactStore;
    PPContactNameRecordLoadingDelegate *_contactDelegate;
    PPNamedEntityStore *_namedEntityStore;
    PPNamedEntityRecordLoadingDelegate *_namedEntityDelegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)warmUp;
- (id)_makeContactDelegate;
- (id)_makeNamedEntityDelegate;
- (id)_makePPNamedEntityStore;
- (void)hibernate;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void)startLoadingWithManager:(id)a0;

@end
