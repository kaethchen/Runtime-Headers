@class NSArray, AVPlaybackSpeed;
@protocol AVPlaybackSpeedCollectionDelegate;

@interface AVPlaybackSpeedCollection : NSObject {
    id<AVPlaybackSpeedCollectionDelegate> _delegate;
    NSArray *_speeds;
    AVPlaybackSpeed *_activeSpeed;
}

@property (readonly, nonatomic) NSArray *speeds;
@property (readonly, nonatomic) AVPlaybackSpeed *selectedSpeed;

+ (id)collectionWithSpeeds:(id)a0;
+ (id)defaultSpeedFromList:(id)a0;
+ (id)keyPathsForValuesAffectingSelectedSpeed;
+ (id)keyPathsForValuesAffectingDisplaySpeeds;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)setActiveSpeed:(id)a0;
- (id)activeSpeed;
- (id)displaySpeeds;
- (id)internalDescription;
- (void)selectNextPlaybackSpeed:(id)a0;
- (void)selectSpeed:(id)a0;
- (id)_initInternalWithSpeeds:(id)a0;

@end
