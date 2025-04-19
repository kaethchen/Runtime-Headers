@class _AMiTunes8Playlist, SBObject;

@interface _AMiTunes8BrowserWindow : _AMiTunes8Window

@property BOOL minimized;
@property (readonly, copy) SBObject *selection;
@property (copy) _AMiTunes8Playlist *view;

@end
