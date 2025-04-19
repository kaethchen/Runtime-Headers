@class NSString, NSArray, NSNumber, NSMutableArray;

@interface LASecureIOScene : NSObject

@property (retain) NSString *name;
@property (retain) NSString *language;
@property (retain) NSNumber *sceneID;
@property (retain) NSNumber *operationID;
@property (retain) NSArray *assets;
@property long long secureIO;
@property (retain) NSMutableArray *anchorPoints;

+ (id)scene;
+ (id)stringFromLASIOSceneSecureIOType:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)dictionary;

@end
