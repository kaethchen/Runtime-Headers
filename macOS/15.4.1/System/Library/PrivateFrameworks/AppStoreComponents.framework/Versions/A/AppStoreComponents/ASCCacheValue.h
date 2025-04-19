@protocol NSObject;

@interface ASCCacheValue : NSObject

@property (retain, nonatomic) id<NSObject> value;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0;

@end
