@interface ILMediaBrowserSortDescriptor : NSSortDescriptor

+ (id)sortDescriptorsFromString:(id)a0;
+ (id)stringForSortDescriptors:(id)a0;

- (long long)compareObject:(id)a0 toObject:(id)a1;
- (id)reversedSortDescriptor;

@end
