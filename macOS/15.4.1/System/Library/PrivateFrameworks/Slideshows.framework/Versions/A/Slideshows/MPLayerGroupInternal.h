@class NSRecursiveLock, NSString, NSDictionary, NSMutableDictionary;

@interface MPLayerGroupInternal : NSObject

@property (nonatomic) double numberOfLoops;
@property (nonatomic) unsigned long long loopingMode;
@property (nonatomic) double durationPadding;
@property (nonatomic) double duration;
@property (nonatomic) double timeIn;
@property (nonatomic) BOOL isTriggered;
@property (nonatomic) BOOL startsPaused;
@property (nonatomic) double phaseInDuration;
@property (nonatomic) double phaseOutDuration;
@property (retain, nonatomic) NSString *backgroundAudioID;
@property (nonatomic) struct CGColor { } *backgroundColor;
@property (retain, nonatomic) NSDictionary *authoredVersionInfo;
@property (nonatomic) long long sendLiveNotification;
@property (retain, nonatomic) NSRecursiveLock *liveLock;
@property (nonatomic) BOOL autoAdjustDuration;
@property (nonatomic) BOOL isDocumentLayerGroup;
@property (nonatomic) BOOL usedAllPaths;
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
@property (retain, nonatomic) NSMutableDictionary *layerKeyDictionary;
@property (retain, nonatomic) NSDictionary *initialState;

- (void)dealloc;

@end
