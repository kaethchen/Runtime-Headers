@class TSCEValue;

@interface TSCEValueContainer : NSObject {
    TSCEValue *_value;
}

- (void).cxx_destruct;
- (id)value;
- (id)initWithValue:(id)a0;

@end
