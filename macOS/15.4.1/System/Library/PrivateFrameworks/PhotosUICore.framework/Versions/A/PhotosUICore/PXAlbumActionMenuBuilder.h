@class NSArray;

@interface PXAlbumActionMenuBuilder : NSObject

@property (class, readonly, nonatomic) NSArray *primaryActionTypes;
@property (class, readonly, nonatomic) NSArray *secondaryActionTypes;
@property (class, readonly, nonatomic) NSArray *internalActionTypes;

@end
