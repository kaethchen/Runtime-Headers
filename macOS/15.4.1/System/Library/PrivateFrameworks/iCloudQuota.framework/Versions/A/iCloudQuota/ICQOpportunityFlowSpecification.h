@class NSString, _ICQOpportunityBubbleImageDetails, NSArray;

@interface ICQOpportunityFlowSpecification : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) _ICQOpportunityBubbleImageDetails *imageDetails;
@property (retain, nonatomic) NSArray *actions;

- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)a0;
- (void)makeActionsFromServerDict:(id)a0;
- (void)makeMessageFromServerDict:(id)a0;

@end
