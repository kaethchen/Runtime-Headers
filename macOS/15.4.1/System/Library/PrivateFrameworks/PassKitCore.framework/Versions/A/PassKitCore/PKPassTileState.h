@class PKPassTileStateDefault, NSArray, PKPassTileStateGroup, PKPassTileStateCheckIn, PKPassTileStateMetadata, PKPassTileStateDefaultV2, PKPassTileStateHostedView, PKPassTileImage, PKPaymentPassAction;

@interface PKPassTileState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassTileStateHostedView *stateTypeHostedView;
@property (readonly, nonatomic) PKPassTileStateGroup *stateTypeGroup;
@property (readonly, nonatomic) PKPassTileStateCheckIn *stateTypeCheckIn;
@property (readonly, nonatomic) PKPassTileStateDefaultV2 *stateTypeDefaultV2;
@property (readonly, nonatomic) PKPassTileStateDefault *stateTypeDefault;
@property (retain, nonatomic) PKPassTileStateMetadata *metadata;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) PKPassTileState *actionState;
@property (retain, nonatomic) PKPassTileImage *icon;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic, getter=isFullBleed) BOOL fullBleed;
@property (copy, nonatomic) NSArray *actionDictionaries;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved;
@property (readonly, nonatomic) PKPaymentPassAction *action;

+ (id)_createForDictionary:(id)a0 withTileType:(long long)a1;
+ (id)_createWithType:(long long)a0;
+ (id)createResolvedStateWithType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedStateWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedState:(id)a0;

@end
