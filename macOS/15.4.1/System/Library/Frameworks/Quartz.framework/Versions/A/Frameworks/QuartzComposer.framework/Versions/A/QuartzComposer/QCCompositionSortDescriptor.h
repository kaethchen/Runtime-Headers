@interface QCCompositionSortDescriptor : NSSortDescriptor

+ (void)initialize;
+ (id)descriptor;

- (long long)compareObject:(id)a0 toObject:(id)a1;

@end
