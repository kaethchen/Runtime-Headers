@class NSString, NSDate;

@interface GKFriendActivityInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSDate *timestamp;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithServerRepresentation:(id)a0;

@end
