@class CNObservable, AKCardViewDataSource, CNPublishingSubject, NSMutableArray;

@interface CNContactCardViewControlContext : NSObject

@property (retain, nonatomic) CNPublishingSubject *cardStateObservable;
@property (retain, nonatomic) NSMutableArray *observers;
@property (nonatomic) BOOL editingRestricted;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) AKCardViewDataSource *dataSource;
@property (readonly, nonatomic) BOOL isDirectoryResult;
@property (readonly, nonatomic) BOOL canSelectContact;
@property (readonly, nonatomic) BOOL canEditContact;
@property (readonly, nonatomic) CNObservable *contactCardStateObservable;

- (id)init;
- (void).cxx_destruct;

@end
