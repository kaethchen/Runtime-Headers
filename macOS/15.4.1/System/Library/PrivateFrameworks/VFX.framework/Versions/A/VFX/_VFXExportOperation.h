@class VFXWorld, NSDictionary, NSURL, NSError, VFXNode, VFXRenderer;

@interface _VFXExportOperation : VFXExportOperation {
    double _systemTime;
}

@property (nonatomic) id delegate;
@property (nonatomic) void *userInfo;
@property (nonatomic) SEL didEndSelector;
@property (retain, nonatomic) VFXWorld *world;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) float progress;
@property (nonatomic) BOOL canceled;
@property (nonatomic) BOOL succeded;
@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) VFXNode *pointOfView;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long antialiasingMode;
@property (retain, nonatomic) VFXRenderer *renderer;

- (void)dealloc;
- (void)cancel;

@end
