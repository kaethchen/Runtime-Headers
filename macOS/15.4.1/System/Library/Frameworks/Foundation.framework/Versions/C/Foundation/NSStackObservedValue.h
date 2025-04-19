@interface NSStackObservedValue : NSObservedValue

- (oneway void)release;
- (id)autorelease;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setError:(id)a0;
- (void)setFinished:(BOOL)a0;
- (void)setValue:(id)a0;

@end
