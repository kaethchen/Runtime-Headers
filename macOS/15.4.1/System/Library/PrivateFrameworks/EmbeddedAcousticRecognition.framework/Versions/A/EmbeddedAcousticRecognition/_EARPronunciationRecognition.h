@interface _EARPronunciationRecognition : NSObject {
    struct unique_ptr<quasar::SystemConfig, std::default_delete<quasar::SystemConfig>> { struct __compressed_pair<quasar::SystemConfig *, std::default_delete<quasar::SystemConfig>> { struct SystemConfig *__value_; } __ptr_; } _sysConfig;
    struct unique_ptr<quasar::ptt::PronunciationRecognizer, std::default_delete<quasar::ptt::PronunciationRecognizer>> { struct __compressed_pair<quasar::ptt::PronunciationRecognizer *, std::default_delete<quasar::ptt::PronunciationRecognizer>> { struct PronunciationRecognizer *__value_; } __ptr_; } _recognizer;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void)transcribeMultipleFromJsonResultsPath:(id)a0;
- (id)transcribePronunciation:(id)a0;

@end
