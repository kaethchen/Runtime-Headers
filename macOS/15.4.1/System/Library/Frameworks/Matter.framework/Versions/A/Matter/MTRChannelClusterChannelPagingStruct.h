@class MTRChannelClusterPageTokenStruct;

@interface MTRChannelClusterChannelPagingStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRChannelClusterPageTokenStruct *previousToken;
@property (copy, nonatomic) MTRChannelClusterPageTokenStruct *nextToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
