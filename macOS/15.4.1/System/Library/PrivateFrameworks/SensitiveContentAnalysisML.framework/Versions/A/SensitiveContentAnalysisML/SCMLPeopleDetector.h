@class _TtC26SensitiveContentAnalysisML28SCMLVisualGenerationHandling, NSLocale;

@interface SCMLPeopleDetector : NSObject {
    _TtC26SensitiveContentAnalysisML28SCMLVisualGenerationHandling *_handler;
    struct unique_ptr<scml::MultiwordGazetteer, std::default_delete<scml::MultiwordGazetteer>> { struct __compressed_pair<scml::MultiwordGazetteer *, std::default_delete<scml::MultiwordGazetteer>> { struct MultiwordGazetteer *__value_; } __ptr_; } _personOverrides;
}

@property (readonly, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)_detectPeopleAsynchronously:(id)a0 completionHandler:(id /* block */)a1;
- (id)detectPeople:(id)a0 error:(id *)a1;
- (void)detectPeopleAsynchronously:(id)a0 completionHandler:(id /* block */)a1;

@end
