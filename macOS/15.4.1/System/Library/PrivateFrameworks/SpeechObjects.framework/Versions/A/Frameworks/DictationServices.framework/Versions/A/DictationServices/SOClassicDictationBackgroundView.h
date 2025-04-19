@class NSString;

@interface SOClassicDictationBackgroundView : NSPopoverFrame <SOClassicDictationBackgroundProtocol>

@property (nonatomic) BOOL drawWithRoomForLanguagePopup;
@property (nonatomic) unsigned char pointerPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)acceptsFirstMouse:(id)a0;
- (void)shapeWindow;

@end
