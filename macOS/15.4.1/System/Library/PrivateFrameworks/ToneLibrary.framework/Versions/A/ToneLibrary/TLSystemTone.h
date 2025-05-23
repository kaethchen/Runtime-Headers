@class NSURL, TLSystemSound;

@interface TLSystemTone : NSObject {
    unsigned int _actualSoundID;
    unsigned int _previewSoundID;
    TLSystemSound *_actualSound;
    TLSystemSound *_previewSound;
}

@property (readonly, nonatomic) NSURL *soundFileURL;
@property (readonly, nonatomic) TLSystemSound *actualSound;
@property (readonly, nonatomic) TLSystemSound *previewSound;
@property (readonly, nonatomic) BOOL requiresLongFormPlayback;

- (void).cxx_destruct;
- (id)initWithSoundFileURL:(id)a0 actualSoundID:(unsigned int)a1 previewSoundID:(unsigned int)a2 requiresLongFormPlayback:(BOOL)a3;

@end
