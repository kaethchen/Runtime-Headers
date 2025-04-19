@interface AAAppState : NSObject

@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL isRestricted;

- (id)initWithInstalled:(BOOL)a0 isRestricted:(BOOL)a1;

@end
