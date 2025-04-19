@class CADDatabaseInitializationOptions, NSURL;
@protocol CalCalendarDataContainerProvider;

@interface CADDatabasePoolKey : NSObject <NSCopying> {
    int _initOptions;
    NSURL *_databaseDirectory;
    id<CalCalendarDataContainerProvider> _calendarDataContainerProvider;
    BOOL _unitTesting;
}

@property (readonly) CADDatabaseInitializationOptions *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInitializationOptions:(id)a0;

@end
