@class NSString;

@interface RMManagedDevice : NSObject

@property (class, readonly, nonatomic) RMManagedDevice *currentManagedDevice;

@property (readonly, nonatomic) BOOL isSupervised;
@property (readonly, nonatomic) BOOL isMDMEnrolled;
@property (readonly, nonatomic) NSString *mdmProfileIdentifier;
@property (readonly, nonatomic) BOOL isSharediPad;

- (void)refreshState;
- (id)getPropertyForKey:(id)a0 scope:(long long)a1;
- (void)setProperty:(id)a0 forKey:(id)a1 scope:(long long)a2;

@end
