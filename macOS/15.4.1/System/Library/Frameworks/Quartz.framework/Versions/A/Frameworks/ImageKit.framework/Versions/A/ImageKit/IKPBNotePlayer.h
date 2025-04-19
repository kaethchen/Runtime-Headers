@class NSSound;

@interface IKPBNotePlayer : NSObject {
    NSSound *_sound;
}

+ (id)countdownNotePlayer;

- (void)dealloc;
- (id)initWithSample:(id)a0;
- (void)startNote;
- (void)stopNote;

@end
