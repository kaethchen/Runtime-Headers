@class NSArray;

@interface MKPlaceCardMenuBuildingOptions : NSObject

@property (readonly, copy, nonatomic) NSArray *requestedActionTypes;
@property (nonatomic) BOOL addMismatchedItems;

- (void).cxx_destruct;
- (id)initWithRequestedActionTypes:(id)a0;

@end
