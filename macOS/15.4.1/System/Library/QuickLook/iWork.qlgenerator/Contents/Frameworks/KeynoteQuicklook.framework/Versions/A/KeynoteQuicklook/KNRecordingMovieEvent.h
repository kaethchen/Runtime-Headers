@class NSUUID, TSDMovieInfo, TSPLazyReference;

@interface KNRecordingMovieEvent : KNRecordingEvent {
    TSPLazyReference *_movieInfoReference;
}

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (readonly, nonatomic) NSUUID *movieSlideNodeUUID;
@property (readonly, nonatomic) BOOL didPlayAcrossSlides;
@property (readonly, nonatomic) long long movieEventType;
@property (readonly, nonatomic) double movieEventValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartTime:(double)a0 movieInfo:(id)a1 movieSlideNodeUUID:(id)a2 didPlayAcrossSlides:(BOOL)a3 movieEventType:(long long)a4 movieEventValue:(double)a5;
- (void)loadFromMessage:(const void *)a0 unarchiver:(id)a1 parentEventTrack:(id)a2;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;

@end
