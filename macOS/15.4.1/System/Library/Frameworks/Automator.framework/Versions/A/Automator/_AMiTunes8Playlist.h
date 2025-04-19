@class NSString;

@interface _AMiTunes8Playlist : _AMiTunes8Item

@property (readonly) long long duration;
@property (copy) NSString *name;
@property (readonly, copy) _AMiTunes8Playlist *parent;
@property BOOL shuffle;
@property (readonly) long long size;
@property int songRepeat;
@property (readonly) int specialKind;
@property (readonly, copy) NSString *time;
@property (readonly) BOOL visible;

- (void)moveTo:(id)a0;
- (id)tracks;
- (id)searchFor:(id)a0 only:(int)a1;

@end
