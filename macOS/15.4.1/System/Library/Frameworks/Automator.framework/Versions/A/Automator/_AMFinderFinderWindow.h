@class SBObject, _AMFinderColumnViewOptions, _AMFinderIconViewOptions, _AMFinderListViewOptions;

@interface _AMFinderFinderWindow : _AMFinderWindow

@property (copy) SBObject *target;
@property int currentView;
@property (readonly, copy) _AMFinderIconViewOptions *iconViewOptions;
@property (readonly, copy) _AMFinderListViewOptions *listViewOptions;
@property (readonly, copy) _AMFinderColumnViewOptions *columnViewOptions;
@property BOOL toolbarVisible;
@property BOOL statusbarVisible;
@property long long sidebarWidth;

@end
