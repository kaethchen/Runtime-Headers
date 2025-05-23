@class HIDAnalyticsHistogramEventField;

@interface HIDAnalyticsHistogramEvent : HIDAnalyticsEvent {
    HIDAnalyticsHistogramEventField *_field;
    BOOL _isUpdated;
}

- (void).cxx_destruct;
- (id)value;
- (void)setValue:(id)a0;
- (void)setIntegerValue:(unsigned long long)a0;
- (void)addField:(id)a0;
- (void)setIntegerValue:(unsigned long long)a0 forField:(id)a1;
- (id)initWithAttributes:(id)a0 description:(id)a1;
- (void)addHistogramFieldWithSegments:(id)a0 segments:(struct _HIDAnalyticsHistogramSegmentConfig { unsigned char x0; unsigned char x1; unsigned char x2; unsigned long long x3; } *)a1 count:(long long)a2;

@end
