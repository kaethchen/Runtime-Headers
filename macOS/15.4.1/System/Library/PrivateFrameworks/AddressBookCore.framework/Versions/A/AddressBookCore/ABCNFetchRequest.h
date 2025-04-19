@interface ABCNFetchRequest : NSObject <NSCopying>

+ (id)fetchRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeFetchWithDataMapper:(id)a0 observer:(id)a1;

@end
