@class FI_TValidatingDateFormatter;

@interface FI_TDateFormatterController : NSObject {
    FI_TValidatingDateFormatter *_shortDateTimeFormatter;
    FI_TValidatingDateFormatter *_shortDateTimeFormatterRelative;
    FI_TValidatingDateFormatter *_shortDateOnlyFormatter;
    FI_TValidatingDateFormatter *_shortDateOnlyFormatterRelative;
    FI_TValidatingDateFormatter *_mediumDateTimeFormatter;
    FI_TValidatingDateFormatter *_mediumDateTimeFormatterRelative;
    FI_TValidatingDateFormatter *_mediumDateOnlyFormatter;
    FI_TValidatingDateFormatter *_mediumDateOnlyFormatterRelative;
    FI_TValidatingDateFormatter *_longDateTimeFormatter;
    FI_TValidatingDateFormatter *_longDateTimeFormatterRelative;
    FI_TValidatingDateFormatter *_fullDateTimeFormatter;
    FI_TValidatingDateFormatter *_fullDateTimeFormatterRelative;
    FI_TValidatingDateFormatter *_fullDateOnlyFormatter;
    FI_TValidatingDateFormatter *_fullDateOnlyFormatterRelative;
    FI_TValidatingDateFormatter *_timeOnlyFormatter;
    FI_TValidatingDateFormatter *_fileNameTimeFormatter;
    FI_TValidatingDateFormatter *_fileNameDateTimeFormatter;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _observers;
}

+ (id)dateFormatterController;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_init;
- (void)reset;
- (id)fileNameDateTimeFormatter;
- (id)fileNameTimeFormatter;
- (id)fullDateOnlyFormatter:(BOOL)a0;
- (id)fullDateTimeFormatter:(BOOL)a0;
- (id)longDateTimeFormatter:(BOOL)a0;
- (id)mediumDateOnlyFormatter:(BOOL)a0;
- (id)mediumDateTimeFormatter:(BOOL)a0;
- (id)shortDateOnlyFormatter:(BOOL)a0;
- (id)shortDateTimeFormatter:(BOOL)a0;
- (id)timeOnlyFormatter;

@end
