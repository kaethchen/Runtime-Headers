@class NSArray, NSMutableArray, RCPEventEnvironment;

@interface RCPEventStream : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *rawEvents;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) RCPEventEnvironment *environment;

+ (id)eventStreamWithData:(id)a0 error:(id *)a1;
+ (id)eventStreamWithFileURL:(id)a0 error:(id *)a1;
+ (id)eventStreamWithStudyLogFileURL:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)statistics;
- (void)writeToURL:(id)a0;
- (id)trimmedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)_addEvent:(id)a0;
- (id)emptyCopy;
- (void)enumerateEventsUsingBlock:(id /* block */)a0;
- (void)filterEventsUsingBlock:(id /* block */)a0;
- (id)streamByAddingEventsFromStream:(id)a0 withDistance:(double)a1;
- (id)timingStatistics;
- (void)transformDigitizerEventLocationsWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
