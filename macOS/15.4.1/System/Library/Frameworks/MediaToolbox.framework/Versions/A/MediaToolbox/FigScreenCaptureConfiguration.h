@class NSString, SLContentFilter;

@interface FigScreenCaptureConfiguration : NSObject {
    struct __CFDictionary { } *_fvdOptions;
    struct OpaqueFigSimpleMutex { } *_lock;
    unsigned long long _preset;
}

@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minFrameInterval;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned long long preset;
@property (nonatomic) long long numOfIdleFrames;
@property (nonatomic) long long imagePoolSize;
@property (nonatomic) NSString *clientName;
@property (nonatomic) NSString *colorspaceName;
@property (nonatomic) NSString *yCbCrMatrix;
@property (nonatomic) BOOL showsCursor;
@property (nonatomic) struct CGColor { } *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } destRect;
@property (nonatomic) SLContentFilter *contentFilter;

- (void)dealloc;
- (id)description;
- (id)init;
- (struct OpaqueFigSimpleMutex { } *)getLock;
- (struct __CFDictionary { } *)getFVDOptions;

@end
