@interface CESRContextualEntityEnablementConfig : NSObject

@property (readonly, nonatomic) BOOL shouldRetrieve;
@property (readonly, nonatomic) BOOL shouldEnroll;

- (id)description;
- (id)initWithShouldRetrieve:(BOOL)a0 shouldEnroll:(BOOL)a1;

@end
