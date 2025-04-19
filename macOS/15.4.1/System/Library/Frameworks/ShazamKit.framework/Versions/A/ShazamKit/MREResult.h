@class NSNumber;

@interface MREResult : NSObject

@property (readonly) unsigned long long trackID;
@property (readonly) double offset;
@property (readonly, retain) NSNumber *timeSkew;
@property (readonly, retain) NSNumber *freqSkew;
@property (readonly, retain) NSNumber *score;

- (void).cxx_destruct;
- (id)initWithTrackId:(unsigned long long)a0 offset:(double)a1 timeSkew:(id)a2 freqSkew:(id)a3 score:(id)a4;

@end
