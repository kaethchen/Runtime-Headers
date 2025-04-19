@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface METrackInfo : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    BOOL _enabled;
    int _naturalTimescale;
    NSArray *_trackEdits;
    NSString *_extendedLanguageTag;
    struct CGSize { double width; double height; } _naturalSize;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _preferredTransform;
    float _nominalFrameRate;
    BOOL _requiresFrameReordering;
}

@property (nonatomic) int naturalTimescale;
@property (copy, nonatomic) NSArray *trackEdits;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (nonatomic) float nominalFrameRate;
@property (nonatomic) BOOL requiresFrameReordering;
@property (readonly, nonatomic) unsigned int mediaType;
@property (readonly, nonatomic) int trackID;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *formatDescriptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMETrackInfo:(id)a0;
- (id)initWithMediaType:(unsigned int)a0 trackID:(int)a1 formatDescriptions:(id)a2;

@end
