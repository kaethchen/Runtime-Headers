@class NSString, NSDictionary, NSMutableArray, NSLock;

@interface CAReportingPerformanceObject : NSObject

@property (nonatomic) struct vector<pc_session *, std::allocator<pc_session *>> { struct pc_session **__begin_; struct pc_session **__end_; struct __compressed_pair<pc_session **, std::allocator<pc_session *>> { struct pc_session **__value_; } __end_cap_; } sessions;
@property (retain, nonatomic) NSMutableArray *processIdentifiers;
@property (retain, nonatomic) NSString *hostApplicationDisplayID;
@property (retain, nonatomic) NSLock *sessionsLock;
@property (readonly, nonatomic) NSDictionary *performanceMetrics;
@property (nonatomic) unsigned short serviceType;
@property (retain, nonatomic) NSDictionary *configuration;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)begin;
- (void)abandon;
- (id)endAndReturnPerformanceMetrics;
- (id)initWithProcessIdentifiers:(id)a0;

@end
