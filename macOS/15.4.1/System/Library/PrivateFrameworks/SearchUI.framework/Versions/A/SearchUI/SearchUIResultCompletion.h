@interface SearchUIResultCompletion : SearchUICompletion

+ (id)pathForImageFromResult:(id)a0;
+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;

- (id)image;
- (BOOL)completionResultIsPotentiallyPunchout;

@end
