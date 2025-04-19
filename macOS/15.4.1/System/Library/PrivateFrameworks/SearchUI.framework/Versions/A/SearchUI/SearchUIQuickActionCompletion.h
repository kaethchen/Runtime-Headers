@interface SearchUIQuickActionCompletion : SearchUICompletion

+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;

- (id)image;
- (BOOL)completionResultIsPotentiallyPunchout;
- (id)prefixMatchExtensionString;

@end
