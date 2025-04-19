@class NSString;

@interface SOClassicDictationPlainBackgroundView : NSView <SOClassicDictationBackgroundProtocol>

@property (nonatomic) unsigned char pointerPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)acceptsFirstMouse:(id)a0;

@end
