@class NSString, NSMutableDictionary;

@interface MPNavigatorInternal : NSObject

@property (retain, nonatomic) NSString *startPlugID;
@property (nonatomic) double opacity;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) double zPosition;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double rotationAngle;
@property (nonatomic) double xRotationAngle;
@property (nonatomic) double yRotationAngle;
@property (nonatomic) double scale;
@property (nonatomic) long long zIndex;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) double numberOfLoops;
@property (nonatomic) double duration;
@property (nonatomic) double timeIn;
@property (nonatomic) BOOL isTriggered;
@property (nonatomic) BOOL startsPaused;
@property (nonatomic) double phaseInDuration;
@property (nonatomic) double phaseOutDuration;
@property (retain, nonatomic) NSMutableDictionary *layerKeyDictionary;

- (void)dealloc;

@end
