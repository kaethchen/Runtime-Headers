@class NSString;

@interface SGTicketEventSchemaCreator : NSObject <SGEventSchemaCreator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkCompletenessOfSchema:(id)a0;
- (id)processDURawEvent:(id)a0;
- (BOOL)reservationIDPresentInEventSchema:(id)a0;

@end
