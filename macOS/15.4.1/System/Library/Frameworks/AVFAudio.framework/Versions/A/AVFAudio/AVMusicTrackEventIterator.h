@interface AVMusicTrackEventIterator : NSObject {
    struct MusicTrackEventIteratorImpl { struct OpaqueMusicEventIterator *x0; } *_impl;
}

- (id)initWithImpl:(struct MusicTrackEventIteratorImpl { struct OpaqueMusicEventIterator *x0; } *)a0;
- (int)previousEvent;
- (BOOL)setEventTime:(double)a0;
- (void)deleteEvent;
- (int)nextEvent;
- (void)seek:(double)a0;
- (BOOL)hasCurrentEvent;
- (void)getEventInfo:(double *)a0 outEventType:(unsigned int *)a1 eventData:(void **)a2 dataSize:(unsigned int *)a3;
- (BOOL)hasNextEvent;
- (BOOL)hasPreviousEvent;
- (BOOL)setEventInfo:(unsigned int)a0 data:(const void *)a1;

@end
