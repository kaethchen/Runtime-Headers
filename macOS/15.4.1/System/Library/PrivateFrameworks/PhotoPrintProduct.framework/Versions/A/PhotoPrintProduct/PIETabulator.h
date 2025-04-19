@class NSMutableDictionary;
@protocol NSCopying;

@interface PIETabulator : NSObject {
    NSMutableDictionary *_countMap;
    id<NSCopying> _maxCountKey;
    unsigned long long _maxCount;
}

- (void)dealloc;
- (id)init;
- (unsigned long long)countForKey:(id)a0;
- (unsigned long long)maxCount;
- (void)incrementKey:(id)a0;
- (id)maxCountKey;
- (id)tabulationMap;

@end
