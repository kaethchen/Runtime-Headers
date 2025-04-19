@interface WKFindResult : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL matchFound;

+ (BOOL)accessInstanceVariablesDirectly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_initWithMatchFound:(BOOL)a0;

@end
