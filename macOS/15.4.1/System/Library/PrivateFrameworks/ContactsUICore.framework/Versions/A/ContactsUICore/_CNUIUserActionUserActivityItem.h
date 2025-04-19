@class NSUserActivity;

@interface _CNUIUserActionUserActivityItem : CNUIUserActionItem

@property (readonly, nonatomic) NSUserActivity *userActivity;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_hashForIntent:(id)a0;
- (BOOL)_isIntent:(id)a0 equalToOther:(id)a1;
- (id)_personFromIntent:(id)a0;
- (id)initWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 userActivity:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
- (id)performActionWithContext:(id)a0;

@end
