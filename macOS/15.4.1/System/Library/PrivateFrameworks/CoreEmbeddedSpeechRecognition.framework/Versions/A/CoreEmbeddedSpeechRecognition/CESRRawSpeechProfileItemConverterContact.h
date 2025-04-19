@class NSString, KVItemBuilder;

@interface CESRRawSpeechProfileItemConverterContact : NSObject <CESRRawSpeechProfileItemConverter> {
    KVItemBuilder *_builder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_companyContactFromSpeechWords:(id)a0 error:(id *)a1;
- (id)_standardContactFromSpeechWords:(id)a0 error:(id *)a1;
- (id)speechCategoryId;
- (id)vocabularyItemFromSpeechWords:(id)a0 speechNamespace:(id)a1 error:(id *)a2;

@end
