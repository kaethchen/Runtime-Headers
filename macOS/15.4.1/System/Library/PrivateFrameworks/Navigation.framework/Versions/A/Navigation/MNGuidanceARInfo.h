@class NSUUID, NSDictionary, GEOComposedString, NSString;
@protocol GEOServerFormattedString;

@interface MNGuidanceARInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *guidanceEventID;
@property (readonly, nonatomic) int eventType;
@property (readonly, nonatomic) int maneuverType;
@property (retain, nonatomic) GEOComposedString *instructionString;
@property (readonly, nonatomic) id<GEOServerFormattedString> instruction;
@property (readonly, nonatomic) NSDictionary *variableOverrides;
@property (readonly, nonatomic) NSString *arrowLabel;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } locationCoordinate;
@property (readonly, nonatomic) struct GEOPolylineCoordinateRange { struct { unsigned int index; float offset; } start; struct { unsigned int index; float offset; } end; } locationCoordinateRange;
@property (readonly, nonatomic) NSString *maneuverRoadName;
@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (nonatomic) unsigned long long priority;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isInstructionStringOutputEqual:(id)a0;
- (id)initWithEventID:(id)a0 type:(int)a1 maneuverType:(int)a2 instruction:(id)a3 variableOverrides:(id)a4 arrowLabel:(id)a5 locationCoordinate:(struct { double x0; double x1; double x2; })a6 maneuverRoadName:(id)a7 heading:(double)a8 stepIndex:(unsigned long long)a9;
- (id)initWithEventID:(id)a0 type:(int)a1 maneuverType:(int)a2 instruction:(id)a3 variableOverrides:(id)a4 arrowLabel:(id)a5 locationCoordinateRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; })a6 maneuverRoadName:(id)a7 stepIndex:(unsigned long long)a8;

@end
