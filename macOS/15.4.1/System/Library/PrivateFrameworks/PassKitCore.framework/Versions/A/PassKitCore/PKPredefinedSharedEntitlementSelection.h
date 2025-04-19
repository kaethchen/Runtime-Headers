@class NSString, NSArray;

@interface PKPredefinedSharedEntitlementSelection : NSObject {
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedPreshareDescription;
@property (readonly, nonatomic) NSString *localizedPostshareDescription;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) NSArray *sharedEntitlements;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 preshareDescription:(id)a1 postshareDescription:(id)a2 sharedEntitlements:(id)a3;

@end
