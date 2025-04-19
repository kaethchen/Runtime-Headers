@class NSEnumerator;

@interface TRIPeekEnumerator : NSObject {
    NSEnumerator *_underlyingEnum;
    id _peek;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithEnumerator:(id)a0;
- (id)peekNextObject;

@end
