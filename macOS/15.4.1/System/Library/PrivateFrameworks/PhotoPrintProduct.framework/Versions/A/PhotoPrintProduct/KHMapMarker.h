@class NSString, KHProjectFrame;

@interface KHMapMarker : NSObject <MKAnnotation, KHSelectable> {
    KHProjectFrame *_mapFrame;
}

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly) long long mapFrameModelId;
@property (readonly) long long labelTextFrameModelId;
@property long long sequenceIdx;
@property (nonatomic) int position;
@property (nonatomic) BOOL autoLabelPositioningEnabled;
@property BOOL hidden;
@property int type;
@property BOOL stale;
@property (nonatomic) BOOL selected;
@property (retain) NSString *labelText;
@property (readonly) KHProjectFrame *labelTextFrame;
@property (readonly) KHProjectFrame *mapFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)rotatedLabelPosition:(int)a0 clockwise:(BOOL)a1;
+ (unsigned long long)labelPositionHorizontalAlignmentForPosition:(int)a0;
+ (unsigned long long)labelPositionVerticalAlignmentForPosition:(int)a0;
+ (unsigned long long)labelTextHorizontalAlignmentForPosition:(int)a0;
+ (long long)labelTextVerticalAlignmentForPosition:(int)a0;

- (void)dealloc;
- (id)stringValue;
- (id)regionId;
- (void)removeMapMarker;
- (void)ensureTextStyle;
- (BOOL)userEditedLabel;
- (BOOL)hasValidLocation;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 mapFrame:(id)a1 sequenceIdx:(long long)a2 position:(int)a3;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 mapFrameId:(long long)a1 sequenceIdx:(long long)a2 labelTextFrameId:(long long)a3 position:(int)a4;
- (id)initWithMapFrame:(id)a0 sequenceIdx:(long long)a1 position:(int)a2;
- (id)initWithString:(id)a0 forMapFrame:(id)a1;
- (unsigned long long)labelPositionHorizontalAlignment;
- (unsigned long long)labelPositionVerticalAlignment;
- (unsigned long long)labelTextHorizontalAlignment;
- (long long)labelTextVerticalAlignment;
- (void)rotateLabel:(BOOL)a0;
- (struct CGPath { } *)selectionPathAtScale:(double)a0;
- (void)setLabelText:(id)a0 momentary:(BOOL)a1;

@end
