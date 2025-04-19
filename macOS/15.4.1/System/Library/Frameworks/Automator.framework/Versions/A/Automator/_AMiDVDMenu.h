@class NSString;

@interface _AMiDVDMenu : _AMiDVDItem

@property (copy) NSString *assignedTheme;
@property (copy) NSString *background;
@property (copy) NSString *backgroundAsset;
@property (copy) NSString *backgroundAudio;
@property (copy) NSString *buttonFont;
@property (copy) NSString *buttonFontColor;
@property double buttonFontSize;
@property double duration;
@property long long horizontalTitleOffset;
@property (copy) NSString *name;
@property (readonly, copy) _AMiDVDMenu *parent;
@property (copy) NSString *playlist;
@property BOOL snapToGrid;
@property double soundtrackVolume;
@property (copy) NSString *title;
@property (copy) NSString *titleFont;
@property (copy) NSString *titleFontColor;
@property double titleFontSize;
@property int transitionDirection;
@property (readonly) double transitionDuration;
@property int transitionType;
@property BOOL useIntro;
@property BOOL useOutro;
@property long long verticalTitleOffset;

- (id)buttons;
- (id)textObjects;
- (id)movies;
- (id)dropzones;
- (id)slideshows;

@end
