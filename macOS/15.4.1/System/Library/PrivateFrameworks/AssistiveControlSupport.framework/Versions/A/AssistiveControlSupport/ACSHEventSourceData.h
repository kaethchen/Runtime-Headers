@interface ACSHEventSourceData : NSObject

@property int pid;
@property unsigned int uid;
@property unsigned int gid;
@property (readonly, copy, nonatomic) id /* block */ axfMouseMarkupEventHandler;

+ (id)eventSourceDataFromCGEventRef:(struct __CGEvent { } *)a0;
+ (id)eventSourceDataFromNSEvent:(id)a0;
+ (void)markupEventRef:(struct __CGEvent { } *)a0 withEventSourceData:(id)a1;

@end
