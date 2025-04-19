@class NSDictionary, NSString, NSArray;

@interface MPWeighterConstraint : NSObject {
    long long numOfImages;
    long long movieCount;
    BOOL moviesOnly;
    BOOL ignoreMovies;
    long long wideLandscape;
    long long square;
    long long landscape;
    long long portrait;
    long long hPanoramas;
    long long vPanoramas;
    long long supportsHPanoramas;
    long long supportsVPanoramas;
    long long supportsAllPanoramas;
    long long allPanoramas;
    BOOL hasPanorama;
    BOOL tagsOnSourceOnly;
    BOOL shelf;
}

@property (retain, nonatomic) NSDictionary *nextConstraints;
@property (retain, nonatomic) NSString *presetID;
@property (retain, nonatomic) NSArray *maxAspectRatios;
@property (retain, nonatomic) NSArray *minAspectRatios;
@property (retain, nonatomic) NSArray *tags;

- (void)dealloc;
- (id)init;

@end
