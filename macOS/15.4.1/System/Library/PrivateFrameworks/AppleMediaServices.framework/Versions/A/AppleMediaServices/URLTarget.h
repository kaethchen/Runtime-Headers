@class NSString;

@interface URLTarget : NSObject

@property (retain) NSString *bundleID;
@property long long defaultIndex;
@property (retain) NSString *normalScheme;
@property (retain) NSString *secureScheme;

+ (id)targetWithBundle:(id)a0 scheme:(id)a1 secureScheme:(id)a2;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0 scheme:(id)a1 secureScheme:(id)a2;

@end
