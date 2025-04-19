@class NSString;

@interface ScreenShotCompat : NSObject {
    void /* unknown type, empty encoding */ imageID;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ groupingInfo;
    void /* unknown type, empty encoding */ detections;
}

@property (nonatomic, readonly) NSString *imageID;

- (id)init;
- (void).cxx_destruct;

@end
