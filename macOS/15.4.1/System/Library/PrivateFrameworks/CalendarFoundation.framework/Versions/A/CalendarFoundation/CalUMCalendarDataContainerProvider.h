@class NSString;

@interface CalUMCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider>

@property (class, readonly, nonatomic) CalUMCalendarDataContainerProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (BOOL)accountUsesDataSeparatedContainer:(id)a0;
- (id)containerForAccountIdentifier:(id)a0;
- (id)containerInfoForAccount:(id)a0;
- (id)containerInfoForAccountIdentifier:(id)a0;
- (id)containerInfoForPersonaIdentifier:(id)a0;

@end
