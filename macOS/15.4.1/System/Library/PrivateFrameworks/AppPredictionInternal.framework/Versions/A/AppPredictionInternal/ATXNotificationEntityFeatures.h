@class NSMutableArray;

@interface ATXNotificationEntityFeatures : NSObject <ATXJSONSerializableProtocol>

@property (retain, nonatomic) NSMutableArray *secondsToEngagement;

- (id)init;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)initFromJSON:(id)a0;

@end
