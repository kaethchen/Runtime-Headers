@class NSFormatter, NSAttributedString;

@interface _NSControlModel : NSObject {
    NSFormatter *_formatter;
    BOOL _hasInvalidObject;
}

@property (copy, setter=_setRawContents:) id _rawContents;
@property (retain, setter=_setCachedAttributedString:) NSAttributedString *_cachedAttributedString;
@property (retain) NSFormatter *formatter;
@property (readonly) BOOL hasValidObjectValue;

- (void)dealloc;
- (double)doubleValue;
- (float)floatValue;
- (int)intValue;
- (long long)integerValue;
- (id)stringValue;
- (BOOL)setStringValue:(id)a0;
- (BOOL)setObjectValue:(id)a0;
- (id)objectValue;
- (BOOL)setDoubleValue:(double)a0;
- (id)attributedStringValueWithDefaultAttributes:(id)a0;
- (BOOL)setAttributedStringValue:(id)a0;
- (BOOL)setFloatValue:(float)a0;
- (BOOL)setIntValue:(int)a0;
- (BOOL)setIntegerValue:(long long)a0;

@end
