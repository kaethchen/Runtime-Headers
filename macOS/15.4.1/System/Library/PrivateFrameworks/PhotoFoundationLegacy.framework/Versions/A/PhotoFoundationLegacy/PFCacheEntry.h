@protocol NSCopying, NSObject;

@interface PFCacheEntry : NSObject {
    id<NSCopying, NSObject> _key;
    id _value;
    unsigned long long _createTime;
    unsigned long long _lastReadTime;
    unsigned long long _readCount;
}

- (id)description;
- (void).cxx_destruct;
- (id)value;
- (id)key;
- (id)initWithKey:(id)a0 value:(id)a1;
- (unsigned long long)readCount;
- (unsigned long long)createTime;
- (void)touch;
- (unsigned long long)lastReadTime;

@end
