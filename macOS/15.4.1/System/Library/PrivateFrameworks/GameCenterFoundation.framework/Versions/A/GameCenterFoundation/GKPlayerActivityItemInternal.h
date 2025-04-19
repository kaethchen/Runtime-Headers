@class NSString, GKPlayerActivityRelationships, NSDate;

@interface GKPlayerActivityItemInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *scrollId;
@property (nonatomic) long long activityType;
@property (nonatomic) long long layoutType;
@property (retain, nonatomic) NSDate *timeStamp;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *summaryMessage;
@property (retain, nonatomic) GKPlayerActivityRelationships *relationships;
@property (retain, nonatomic) NSString *instrumentationKey;

+ (id)constantToTypeMap;
+ (id)secureCodedPropertyKeys;
+ (id)typeToConstantMap;
+ (id)typeToConstantMapMetrics;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
