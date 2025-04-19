@interface SearchUICommandCompletion : SearchUICompletion

+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;

- (id)image;
- (id)command;
- (void)updateFields;
- (BOOL)completionResultIsPotentiallyPunchout;
- (id)prefixMatchExtensionString;

@end
