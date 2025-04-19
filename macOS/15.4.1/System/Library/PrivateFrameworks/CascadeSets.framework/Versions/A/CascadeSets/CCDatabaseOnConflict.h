@interface CCDatabaseOnConflict : NSObject

@property (readonly, nonatomic) long long type;

+ (id)onConflictWithType:(long long)a0;

- (id)initWithType:(long long)a0;

@end
