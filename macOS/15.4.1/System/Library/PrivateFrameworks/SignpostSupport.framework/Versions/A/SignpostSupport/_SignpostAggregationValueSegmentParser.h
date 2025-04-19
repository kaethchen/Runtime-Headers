@class NSString, NSNumber;

@interface _SignpostAggregationValueSegmentParser : NSObject

@property (retain, nonatomic) NSString *group;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *unit;
@property (retain, nonatomic) NSNumber *value;
@property (nonatomic) BOOL telemetryEnabled;

- (void).cxx_destruct;
- (id)processSegment:(id)a0 placeholderType:(unsigned char)a1;
- (void)_clearFields;

@end
