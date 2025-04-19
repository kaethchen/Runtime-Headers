@class NSString, APDatabaseManager;

@interface APDatabaseTable : NSObject <APDatabaseTableProtocol> {
    APDatabaseManager *_manager;
}

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) Class rowClass;
@property (readonly, weak, nonatomic) APDatabaseManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
