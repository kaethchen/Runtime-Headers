@class NSArray;

@interface RTLocationContextManagerPlaceInferencesNotification : RTNotification

@property (readonly, nonatomic) NSArray *placeInferences;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPlaceInferences:(id)a0;

@end
