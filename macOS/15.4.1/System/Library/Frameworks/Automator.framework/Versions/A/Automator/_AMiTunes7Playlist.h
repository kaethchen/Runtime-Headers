@class NSString;

@interface _AMiTunes7Playlist : _AMiTunes7Item

@property (readonly) long long duration;
@property (readonly) long long index;
@property (copy) NSString *name;
@property (readonly, copy) _AMiTunes7Playlist *parent;
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
