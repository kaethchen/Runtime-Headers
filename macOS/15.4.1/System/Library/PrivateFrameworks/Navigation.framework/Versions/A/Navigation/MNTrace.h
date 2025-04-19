@class GEOComposedRoute, NSString, NSArray, NSDictionary, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface MNTrace : NSObject {
    NSMutableArray *_preparedStatements;
}

@property (class, nonatomic, readonly) unsigned long long currentVersion;
@property (class, nonatomic, readonly) NSString *mainSchema;

@property (nonatomic, readonly) GEOComposedRoute *initialRoute;
@property (readonly, nonatomic) struct sqlite3 { } *db;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *writeGroup;
@property (nonatomic) long long traceType;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long originalVersion;
@property (nonatomic) BOOL isSimulation;
@property (retain, nonatomic) NSDate *recordingStartDate;
@property (retain, nonatomic) NSDate *directionsStartDate;
@property (retain, nonatomic) NSDate *navigationStartDate;
@property (retain, nonatomic) NSDate *navigationEndDate;
@property (retain, nonatomic) NSArray *locations;
@property (retain, nonatomic) NSArray *directions;
@property (retain, nonatomic) NSArray *etaUpdates;
@property (retain, nonatomic) NSArray *headingData;
@property (retain, nonatomic) NSArray *motionData;
@property (retain, nonatomic) NSArray *vehicleHeadingData;
@property (retain, nonatomic) NSArray *vehicleSpeedData;
@property (retain, nonatomic) NSArray *evData;
@property (retain, nonatomic) NSArray *navigationEvents;
@property (retain, nonatomic) NSArray *annotatedUserBehavior;
@property (retain, nonatomic) NSArray *annotatedUserEnvironments;
@property (retain, nonatomic) NSArray *navigationUpdates;
@property (retain, nonatomic) NSArray *networkEvents;
@property (retain, nonatomic) NSArray *routeCreationActions;
@property (retain, nonatomic) NSArray *bookmarks;
@property (retain, nonatomic) NSArray *bookmarkImages;
@property (retain, nonatomic) NSDictionary *miscInfo;
@property (readonly, nonatomic) NSString *tracePath;
@property (readonly, nonatomic) int mainTransportType;

+ (id)upgradeSchemaFromVersion:(unsigned long long)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_handleOpenErrorWithPath:(id)a0;
- (BOOL)closeTrace;
- (id)dateFromTimestamp:(double)a0;
- (long long)locationIndexAfterTimestamp:(double)a0;
- (BOOL)openTrace:(id)a0 outError:(id *)a1;
- (id)prepareStatement:(id)a0 outError:(out id *)a1;
- (id)routeBeforeTimestamp:(double)a0;
- (id)routesWithDirectionsResponseID:(id)a0 selectedRouteIndex:(long long *)a1;
- (id)serializableBookmarks;
- (BOOL)startWritingTraceToPath:(id)a0;

@end
