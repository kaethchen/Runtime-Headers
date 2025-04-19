@class NSData;

@interface LACDTOKVStoreValue : NSObject {
    NSData *_data;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)boolValue;
- (id)data;
- (id)initWithData:(id)a0;
- (long long)integerValue;
- (id)initWithBoolValue:(BOOL)a0;
- (id)initWithIntegerValue:(long long)a0;

@end
