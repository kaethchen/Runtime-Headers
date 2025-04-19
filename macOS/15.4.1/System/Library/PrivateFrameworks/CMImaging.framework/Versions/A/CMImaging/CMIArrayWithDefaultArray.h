@class NSArray;

@interface CMIArrayWithDefaultArray : NSArray {
    unsigned long long _count;
}

@property (readonly) NSArray *mainArray;
@property (readonly) NSArray *defaultArray;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithMainArray:(id)a0 defaultArray:(id)a1;

@end
