@interface USKTimeCode : NSObject {
    struct SdfTimeCode { double _time; } _timeCode;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDouble:(double)a0;
- (double)doubleValue;
- (id).cxx_construct;
- (id)initWithSdfTimeCode:(struct SdfTimeCode { double x0; })a0;
- (struct SdfTimeCode { double x0; })sdfTimeCode;

@end
