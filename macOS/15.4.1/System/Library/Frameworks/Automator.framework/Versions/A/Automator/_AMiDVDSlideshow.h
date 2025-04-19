@class NSString, NSArray, _AMiDVDButton, _AMiDVDMenu;

@interface _AMiDVDSlideshow : _AMiDVDItem

@property (copy) NSString *backgroundAudio;
@property (copy) NSArray *data;
@property BOOL displayArrows;
@property double duration;
@property BOOL DVDROM;
@property BOOL loop;
@property (copy) NSString *name;
@property (readonly, copy) _AMiDVDMenu *parent;
@property (copy) NSString *playlist;
@property double soundtrackVolume;
@property (readonly, copy) _AMiDVDButton *sourcebutton;
@property int transitionDirection;
@property (readonly) double transitionDuration;
@property int transitionType;

- (id)images;

@end
