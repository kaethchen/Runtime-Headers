@class NSString;

@interface PKPassTileStateGroup : PKPassTileState

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSString *headerActionTitle;
@property (copy, nonatomic) NSString *footerActionTitle;

+ (BOOL)supportsSecureCoding;
+ (id)_createDefaultDashboardGroupStateWithMetadata:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedStateWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedState:(id)a0;

@end
