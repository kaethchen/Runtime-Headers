@class BU_TValidatingDateFormatter;

@interface BU_TDateFormatterController : NSObject {
    BU_TValidatingDateFormatter *_shortDateTimeFormatter;
    BU_TValidatingDateFormatter *_shortDateTimeFormatterRelative;
    BU_TValidatingDateFormatter *_shortDateOnlyFormatter;
    BU_TValidatingDateFormatter *_shortDateOnlyFormatterRelative;
    BU_TValidatingDateFormatter *_mediumDateTimeFormatter;
    BU_TValidatingDateFormatter *_mediumDateTimeFormatterRelative;
    BU_TValidatingDateFormatter *_mediumDateOnlyFormatter;
    BU_TValidatingDateFormatter *_mediumDateOnlyFormatterRelative;
    BU_TValidatingDateFormatter *_longDateTimeFormatter;
    BU_TValidatingDateFormatter *_longDateTimeFormatterRelative;
    BU_TValidatingDateFormatter *_fullDateTimeFormatter;
    BU_TValidatingDateFormatter *_fullDateTimeFormatterRelative;
    BU_TValidatingDateFormatter *_fullDateOnlyFormatter;
    BU_TValidatingDateFormatter *_fullDateOnlyFormatterRelative;
    BU_TValidatingDateFormatter *_timeOnlyFormatter;
    BU_TValidatingDateFormatter *_fileNameTimeFormatter;
    BU_TValidatingDateFormatter *_fileNameDateTimeFormatter;
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
