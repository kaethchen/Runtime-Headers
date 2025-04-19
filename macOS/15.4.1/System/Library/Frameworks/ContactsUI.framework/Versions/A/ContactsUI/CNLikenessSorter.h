@interface CNLikenessSorter : NSObject

+ (id /* block */)standardSorting;
+ (id /* block */)creationDateNewestToOldestComparator;
+ (id /* block */)currentLikenessesFirstComparator;

@end
