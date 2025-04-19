@class NSNotificationCenter, NSManagedObjectContext;
@protocol CNCDManagedObjectContextSaveListenerDelegate;

@interface CNCDManagedObjectContextSaveListener : NSObject

@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) id willSaveToken;
@property (retain) id didSaveToken;
@property (readonly) NSManagedObjectContext *context;
@property (readonly, weak) id<CNCDManagedObjectContextSaveListenerDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (void)beginListening;
- (void)endListening;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (id)initWithContext:(id)a0 delegate:(id)a1 notificationCenter:(id)a2;

@end
