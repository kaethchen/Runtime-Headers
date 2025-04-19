@class NSDictionary, NSDate;

@interface WFCloudKitSyncEvent : NSObject

@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) int eventType;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSDictionary *content;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(int)a0 eventType:(int)a1 date:(id)a2 content:(id)a3;

@end
