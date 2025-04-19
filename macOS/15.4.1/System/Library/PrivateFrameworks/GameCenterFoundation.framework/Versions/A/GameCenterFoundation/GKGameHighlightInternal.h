@class NSNumber, NSString;

@interface GKGameHighlightInternal : GKInternalRepresentation

@property (nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
