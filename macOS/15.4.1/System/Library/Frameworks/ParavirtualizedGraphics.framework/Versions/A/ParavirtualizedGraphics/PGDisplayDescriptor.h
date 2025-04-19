@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PGDisplayDescriptor : NSObject {
    id /* block */ _cursorGlyphHandler2;
    id /* block */ _sleepHandler;
    id /* block */ _modeListResponsivenessChangeHandler;
    struct { struct { float x; float y; } redPrimary; struct { float x; float y; } greenPrimary; struct { float x; float y; } bluePrimary; struct { float x; float y; } whitePoint; } _colorSpace;
    id /* block */ _compositorParametersHandler;
    unsigned long long _configEpoch;
    struct { unsigned short x; unsigned short y; } _origin;
    unsigned char _scaleFactor;
    BOOL _optIntoUsingUnplugMethod;
    int _connectionType;
    float _minNits;
    float _maxNits;
    float _maxSDRNits;
}

@property (copy, nonatomic) id /* block */ cursorGlyphHandler2;
@property (copy, nonatomic) id /* block */ sleepHandler;
@property (copy, nonatomic) id /* block */ modeListResponsivenessChangeHandler;
@property (copy, nonatomic) id /* block */ compositorParametersHandler;
@property (nonatomic) struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; struct { float x0; float x1; } x3; } colorSpace;
@property (nonatomic) unsigned long long configEpoch;
@property (nonatomic) struct { unsigned short x0; unsigned short x1; } origin;
@property (nonatomic) unsigned char scaleFactor;
@property (nonatomic) BOOL optIntoUsingUnplugMethod;
@property (nonatomic) int connectionType;
@property (nonatomic) float minNits;
@property (nonatomic) float maxNits;
@property (nonatomic) float maxSDRNits;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CGSize { double width; double height; } sizeInMillimeters;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ modeChangeHandler;
@property (copy, nonatomic) id /* block */ newFrameEventHandler;
@property (copy, nonatomic) id /* block */ cursorGlyphHandler;
@property (copy, nonatomic) id /* block */ cursorShowHandler;
@property (copy, nonatomic) id /* block */ cursorMoveHandler;

- (void)dealloc;
- (id)init;

@end
