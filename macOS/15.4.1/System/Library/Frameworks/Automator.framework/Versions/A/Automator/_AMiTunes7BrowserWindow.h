@class _AMiTunes7Playlist, SBObject;

@interface _AMiTunes7BrowserWindow : _AMiTunes7Window

@property BOOL minimized;
@property (readonly, copy) SBObject *selection;
@property (copy) _AMiTunes7Playlist *view;

@end
