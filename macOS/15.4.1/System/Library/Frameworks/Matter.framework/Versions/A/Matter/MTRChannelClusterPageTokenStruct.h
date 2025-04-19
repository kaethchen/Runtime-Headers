@class NSNumber, NSString;

@interface MTRChannelClusterPageTokenStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *limit;
@property (copy, nonatomic) NSString *after;
@property (copy, nonatomic) NSString *before;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
