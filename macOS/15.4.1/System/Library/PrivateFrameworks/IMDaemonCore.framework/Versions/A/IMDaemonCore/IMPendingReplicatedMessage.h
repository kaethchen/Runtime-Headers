@class NSString, NSArray, NSDate;

@interface IMPendingReplicatedMessage : NSObject

@property (copy, nonatomic) NSString *messageGUID;
@property (copy, nonatomic) NSArray *replicatedFallbackGUIDs;
@property (copy, nonatomic) id /* block */ releaseBlock;
@property (copy, nonatomic) NSDate *date;

- (void).cxx_destruct;

@end
