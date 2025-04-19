@class NSEnumerator;

@interface PKEnumerator : NSEnumerator

@property (class, readonly, nonatomic) id /* block */ defaultFilter;

@property (readonly, nonatomic) NSEnumerator *underlyingEnumerator;
@property (copy, nonatomic) id /* block */ filter;

- (id)init;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithNSEnumerator:(id)a0;

@end
