@class NSString, NSNumber;

@interface GKPlayerActivityRelationshipIcon : GKInternalRepresentation

@property (retain, nonatomic) NSString *url;
@property (nonatomic) long long platform;
@property (nonatomic) NSNumber *width;
@property (nonatomic) NSNumber *height;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
