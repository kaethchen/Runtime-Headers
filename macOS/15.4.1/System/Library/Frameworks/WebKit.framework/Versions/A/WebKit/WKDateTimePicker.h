@interface WKDateTimePicker : NSObject {
    struct WeakPtr<WebKit::WebDateTimePickerMac, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _picker;
    struct DateTimeChooserParameters { struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } m_string; } type; struct IntRect { struct IntPoint { int m_x; int m_y; } m_location; struct IntSize { int m_width; int m_height; } m_size; } anchorRectInRootView; struct AtomString { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } m_string; } locale; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } currentValue; struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct String *m_buffer; unsigned int m_capacity; unsigned int m_size; } suggestionValues; struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct String *m_buffer; unsigned int m_capacity; unsigned int m_size; } localizedSuggestionValues; struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct String *m_buffer; unsigned int m_capacity; unsigned int m_size; } suggestionLabels; double minimum; double maximum; double step; double stepBase; BOOL required; BOOL isAnchorElementRTL; BOOL useDarkAppearance; BOOL hasSecondField; BOOL hasMillisecondField; } _params;
    struct WeakObjCPtr<NSView> { id m_weakReference; } _presentingView;
    struct RetainPtr<WKDateTimePickerWindow> { void *m_ptr; } _enclosingWindow;
    struct RetainPtr<NSDatePicker> { void *m_ptr; } _datePicker;
    struct RetainPtr<NSDateFormatter> { void *m_ptr; } _dateFormatter;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (id)dateFormatFallbackForFormat:(id)a0;
- (id)dateFormatStringForType:(id)a0;
- (void)didChooseDate:(id)a0;
- (id)initWithParams:(void *)a0 inView:(id)a1;
- (id)initialDateForEmptyValue;
- (void)showPicker:(void *)a0;
- (void)updatePicker:(void *)a0;

@end
