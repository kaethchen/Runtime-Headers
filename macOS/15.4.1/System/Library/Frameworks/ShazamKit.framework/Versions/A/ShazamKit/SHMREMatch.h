@class NSNumber, NSArray, SHSignature;

@interface SHMREMatch : NSObject

@property (readonly) unsigned long long trackID;
@property (readonly) double offset;
@property (readonly) NSNumber *timeSkew;
@property (readonly) NSNumber *freqSkew;
@property (readonly) NSNumber *score;
@property (readonly) NSArray *mediaItems;
@property (readonly) NSArray *signatureAlignments;
@property (readonly) SHSignature *querySignature;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0 mediaItems:(id)a1 signatureAlignments:(id)a2 querySignature:(id)a3;
- (id)initWithTrackID:(unsigned long long)a0 matchOffset:(double)a1 timeSkew:(id)a2 frequencySkew:(id)a3 score:(id)a4 mediaItems:(id)a5 querySignature:(id)a6 signatureAlignments:(id)a7;
- (id)toMatchedMediaItems;

@end
