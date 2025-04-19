@class NSString;

@interface AVTouchBarCaptureInputSourceItem : NSObject

@property (readonly) NSString *title;
@property (readonly, getter=isBuiltIn) BOOL builtIn;
@property (readonly, getter=isNoAudioItem) BOOL noAudioItem;
@property (readonly, getter=isEnabled) BOOL enabled;
@property (retain) id representedObject;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 builtIn:(BOOL)a1 noAudioItem:(BOOL)a2 enabled:(BOOL)a3;

@end
