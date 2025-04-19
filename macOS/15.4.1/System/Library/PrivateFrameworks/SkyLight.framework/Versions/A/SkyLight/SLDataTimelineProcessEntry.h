@protocol SLDataTimelineProcessWindows;

@interface SLDataTimelineProcessEntry : NSObject <SLDataTimelineProcess, SLDataTimelineProcessWindows, SLXPCConvertible> {
    unsigned long long _windowScreenStates[4];
}

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) id<SLDataTimelineProcessWindows> windowData;
@property (readonly, nonatomic) unsigned long long orderedOut;
@property (readonly, nonatomic) unsigned long long offScreen;
@property (readonly, nonatomic) unsigned long long onScreenOccluded;
@property (readonly, nonatomic) unsigned long long onScreenVisible;

+ (id)entryWithXPCObject:(id)a0;

- (id)createXPCObject;
- (id)initWithXPCObject:(id)a0;

@end
