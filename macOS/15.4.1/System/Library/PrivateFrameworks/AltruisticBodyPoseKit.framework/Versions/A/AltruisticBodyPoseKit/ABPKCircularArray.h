@class NSArray, NSMutableArray;

@interface ABPKCircularArray : NSObject {
    NSMutableArray *_array;
    long long _capacity;
}

@property (readonly) NSArray *contents;

- (void).cxx_destruct;
- (long long)count;
- (id)initWithCapacity:(long long)a0;
- (void)add:(id)a0;

@end
