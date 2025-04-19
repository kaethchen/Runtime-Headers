@class NSArray, NSString;

@interface GKPlayerActivityInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSString *continuationToken;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;
- (id)initWithServerResponse:(id)a0;

@end
