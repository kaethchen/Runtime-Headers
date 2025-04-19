@class NSString, NSArray, STAlwaysAllowedController;

@interface STAlwaysAllowedItem : STUsageDetailItem

@property (nonatomic) BOOL blockable;
@property (retain, nonatomic) NSString *cachedDisplayName;
@property (copy, nonatomic) NSArray *cachedBundledIDs;
@property (weak, nonatomic) STAlwaysAllowedController *controller;
@property (nonatomic) BOOL alwaysAllowed;

+ (id)itemWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 identifier:(id)a1;
- (long long)compare:(id)a0 option:(long long)a1;

@end
