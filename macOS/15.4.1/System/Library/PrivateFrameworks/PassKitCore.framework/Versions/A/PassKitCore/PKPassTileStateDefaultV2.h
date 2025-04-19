@class PKPassTileImage, PKPassTileAccessory, PKPassTileValue;

@interface PKPassTileStateDefaultV2 : PKPassTileState

@property (retain, nonatomic) PKPassTileValue *title;
@property (retain, nonatomic) PKPassTileValue *body;
@property (retain, nonatomic) PKPassTileImage *bodyImage;
@property (retain, nonatomic) PKPassTileValue *footer;
@property (nonatomic) long long preferredStyle;
@property (retain, nonatomic) PKPassTileAccessory *accessory;
@property (retain, nonatomic) PKPassTileAccessory *secondaryAccessory;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedStateWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedState:(id)a0;

@end
