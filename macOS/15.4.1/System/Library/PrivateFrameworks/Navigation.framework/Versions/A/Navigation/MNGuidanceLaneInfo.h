@class NSUUID, NSArray, NSDictionary;

@interface MNGuidanceLaneInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) BOOL isForManeuver;
@property (readonly, nonatomic) NSArray *lanes;
@property (readonly, nonatomic) NSArray *titles;
@property (readonly, nonatomic) NSArray *instructions;
@property (retain, nonatomic) NSArray *primaryStrings;
@property (retain, nonatomic) NSArray *secondaryStrings;
@property (readonly, nonatomic) NSDictionary *variableOverrides;
@property (readonly, nonatomic) long long distanceDetailLevel;
@property (readonly, nonatomic) int composedGuidanceEventIndex;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithID:(id)a0 isForManeuver:(BOOL)a1 lanes:(id)a2 titles:(id)a3 instructions:(id)a4 variableOverrides:(id)a5 distanceDetailLevel:(long long)a6 composedGuidanceEventIndex:(int)a7;

@end
