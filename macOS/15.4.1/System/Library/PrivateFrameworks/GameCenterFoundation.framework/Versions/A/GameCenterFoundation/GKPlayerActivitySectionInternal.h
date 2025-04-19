@class NSArray, NSString;

@interface GKPlayerActivitySectionInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *instrumentationKey;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
