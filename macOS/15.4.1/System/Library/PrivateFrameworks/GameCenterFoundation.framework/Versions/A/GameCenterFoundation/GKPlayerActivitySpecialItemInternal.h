@class NSString, NSDate;

@interface GKPlayerActivitySpecialItemInternal : GKInternalRepresentation

@property (nonatomic) long long activityType;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *alternateMessage;
@property (retain, nonatomic) NSString *sfSymbol;
@property (retain, nonatomic) NSDate *timeStamp;
@property (retain, nonatomic) NSString *instrumentationKey;

+ (id)constantToTypeMap;
+ (id)secureCodedPropertyKeys;
+ (id)typeToConstantMap;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
