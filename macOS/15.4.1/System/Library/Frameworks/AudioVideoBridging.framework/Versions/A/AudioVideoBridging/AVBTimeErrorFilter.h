@interface AVBTimeErrorFilter : NSObject

@property unsigned long long prerollLength;

- (void)resetFilter;
- (double)filteredErrorForError:(double)a0;

@end
