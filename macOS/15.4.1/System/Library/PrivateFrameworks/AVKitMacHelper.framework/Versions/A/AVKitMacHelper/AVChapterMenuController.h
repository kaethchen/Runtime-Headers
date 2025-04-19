@class AVTimeFormatter, NSArray, NSMenu, NSMenuItem, NSMutableArray;

@interface AVChapterMenuController : NSObject {
    NSArray *_chapters;
    NSMutableArray *_chaptersMenuItems;
    long long _selectedIndex;
    id /* block */ _selectionHandler;
    AVTimeFormatter *_startTimeFormatter;
}

@property (retain) NSMenu *menu;
@property (readonly) NSMenuItem *selectedMenuItem;

- (void).cxx_destruct;
- (void)_selection:(id)a0;
- (void)_updateMenu;
- (id)initWithMenu:(id)a0 chapters:(id)a1 selectedIndex:(long long)a2 selectionHandler:(id /* block */)a3;
- (void)setChapters:(id)a0 selectedIndex:(long long)a1;

@end
