@class NSDictionary;
@protocol MFEWSBodyPersistOperationDelegate;

@interface MFEWSBodyPersistOperation : MFEWSPersistenceTaskOperation

@property (readonly, copy, nonatomic) NSDictionary *bodiesByMessage;
@property (readonly, copy, nonatomic) NSDictionary *calendarEventsByMessage;
@property (weak, nonatomic) id<MFEWSBodyPersistOperationDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithBodiesByMessage:(id)a0 calendarEventsByMessage:(id)a1;

@end
