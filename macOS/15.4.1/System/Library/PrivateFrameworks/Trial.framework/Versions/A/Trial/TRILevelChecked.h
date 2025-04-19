@class TRILevel;

@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)a0;

- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (double)doubleValue;
- (float)floatValue;
- (int)intValue;
- (long long)longValue;
- (void).cxx_destruct;
- (id)stringValue;
- (BOOL)booleanValue;
- (id)binaryValue;
- (id)directoryValue;
- (id)initWithLevel:(id)a0;
- (id)fileValue;

@end
