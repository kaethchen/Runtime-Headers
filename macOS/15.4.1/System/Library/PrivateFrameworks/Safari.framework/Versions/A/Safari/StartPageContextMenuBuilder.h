@class NSString, WBSStartPageSectionManager;

@interface StartPageContextMenuBuilder : NSObject {
    WBSStartPageSectionManager *_startPageSectionManager;
}

@property (nonatomic) BOOL includesTabGroupSections;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) id /* block */ showMoreHandler;
@property (copy, nonatomic) id /* block */ showLessHandler;

- (void).cxx_destruct;
- (void)_addToggleToMenu:(id)a0 fromData:(id)a1;
- (id)buildMenu;
- (id)buildMenuWithExcludedSections:(id)a0;
- (id)initWithSectionManager:(id)a0;

@end
