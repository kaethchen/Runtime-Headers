@class NSString;

@interface _PFBackgroundRuntimeVoucher : NSObject {
    NSString *_taskName;
    unsigned long long _sequenceID;
}

+ (void)initialize;
+ (id)_beginPowerAssertionNamed:(id)a0;
+ (void)_endPowerAssertionWithVoucher:(id)a0;

- (void)dealloc;
- (id)init;
- (id)initWithTask:(id)a0 andSequence:(unsigned long long)a1;

@end
