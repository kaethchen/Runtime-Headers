@class NSObject;

@interface SCRFocusMovementNavigationEventInfo : NSObject

@property (nonatomic) unsigned long long focusDirection;
@property (nonatomic) BOOL moveByGroups;
@property (nonatomic) BOOL allowsDeeperDrillIn;
@property (nonatomic) BOOL shouldWrap;
@property (weak, nonatomic) NSObject *firstLevelAncestorForHeadingMovementSourceElement;
@property (weak, nonatomic) NSObject *secondLevelAncestorForHeadingMovementSourceElement;

+ (id)infoWithDirection:(unsigned long long)a0;
+ (id)infoWithDirection:(unsigned long long)a0 moveByGroups:(BOOL)a1 allowsDeeperDrillIn:(BOOL)a2 shouldWrap:(BOOL)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
