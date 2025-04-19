@class NSArray;

@interface XQuerySortItem : NSObject {
    id _value;
    long long _position;
    NSArray *_sortInfo;
}

- (void)dealloc;
- (void)finalize;
- (id)value;
- (long long)position;
- (id)initWithValue:(id)a0 sortInfo:(id)a1 forPosition:(long long)a2;
- (id)sortInfo;

@end
