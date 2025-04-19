@class NSString, QCNumberPort, QCStringPort;

@interface QCNumberFormatter : QCPatch {
    QCNumberPort *inputNumber;
    QCStringPort *outputString;
    long long _style;
    NSString *_format;
    struct __CFNumberFormatter { } *_formatter;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (long long)style;
- (void)setStyle:(long long)a0;
- (id)formatString;
- (void)setFormatString:(id)a0;
- (BOOL)setup:(id)a0;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
