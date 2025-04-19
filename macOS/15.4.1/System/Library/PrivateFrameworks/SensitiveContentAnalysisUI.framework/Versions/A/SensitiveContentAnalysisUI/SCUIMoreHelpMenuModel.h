@class NSString, NSArray, SCUIReportAuthority, NSDictionary;

@interface SCUIMoreHelpMenuModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) SCUIReportAuthority *authority;
@property (copy, nonatomic) NSDictionary *contextDictionary;
@property (nonatomic) long long interventionType;
@property (nonatomic) long long options;

+ (void)addDefaultActionsTo:(id)a0;
+ (void)addMenuActionsTo:(id)a0 interventionType:(long long)a1;
+ (void)addOptionalActionsTo:(id)a0 options:(long long)a1;
+ (id)menuTitleWith:(long long)a0 options:(long long)a1;
+ (id)modelWithOptions:(long long)a0 contextDictionary:(id)a1 interventionType:(long long)a2 locale:(id)a3;
+ (id)modelWithOptions:(long long)a0 interventionType:(long long)a1 locale:(id)a2;

- (void).cxx_destruct;

@end
