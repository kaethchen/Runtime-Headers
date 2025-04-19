@class NSString;

@interface _EARGeoLMHelper : NSObject {
    struct unique_ptr<quasar::Geography, std::default_delete<quasar::Geography>> { struct __compressed_pair<quasar::Geography *, std::default_delete<quasar::Geography>> { struct Geography *__value_; } __ptr_; } _geography;
    NSString *_locale;
}

- (void).cxx_destruct;
- (id)locale;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (id)initWithLocale:(id)a0 config:(id)a1;
- (id)regionIdForLatitude:(double)a0 longitude:(double)a1;
- (id)regionIdForLocale:(id)a0 latitude:(double)a1 longitude:(double)a2;

@end
