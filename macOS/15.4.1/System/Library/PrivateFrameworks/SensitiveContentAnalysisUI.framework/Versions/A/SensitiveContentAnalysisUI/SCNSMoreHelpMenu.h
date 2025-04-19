@class NSDictionary, NSString;
@protocol SCUIMoreHelpMenuDelegate;

@interface SCNSMoreHelpMenu : NSAlert <SCUIMoreHelpMenuController>

@property (nonatomic) long long options;
@property (nonatomic) long long interventionType;
@property (weak, nonatomic) id<SCUIMoreHelpMenuDelegate> menuDelegate;
@property (readonly, copy, nonatomic) NSDictionary *contextDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)menu;
+ (id)menuWithOptions:(long long)a0;
+ (id)menuWithAnalysis:(id)a0 options:(long long)a1;
+ (id)menuWithOptions:(long long)a0 interventionType:(long long)a1;

@end
