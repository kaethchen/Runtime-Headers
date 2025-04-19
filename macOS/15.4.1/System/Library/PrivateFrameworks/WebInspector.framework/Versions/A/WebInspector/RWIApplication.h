@class NSString, NSArray, RWITarget, NSImage, NSMutableDictionary;
@protocol RWIApplicationDelegate;

@interface RWIApplication : NSObject {
    NSImage *_icon;
    NSMutableDictionary *_allDebuggables;
    NSMutableDictionary *_drivables;
}

@property (readonly, nonatomic, getter=isProxy) BOOL proxy;
@property (copy, nonatomic) NSString *hostApplicationIdentifier;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) unsigned long long debuggerAvailability;
@property (readonly, nonatomic) NSArray *allDebuggables;
@property (weak, nonatomic) id<RWIApplicationDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) RWITarget *target;
@property (readonly, nonatomic) NSArray *debuggables;
@property (readonly, nonatomic) NSArray *drivables;
@property (readonly, copy, nonatomic) NSImage *icon;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) long long automationAvailability;
@property (readonly, nonatomic) BOOL isCurrentTarget;
@property (readonly, nonatomic) BOOL isCurrentApplication;

+ (id)identifierForPID:(int)a0;

- (void).cxx_destruct;
- (void)wakeUpDebuggables;
- (id)hostApplication;
- (void)removeDrivable:(id)a0;
- (void)_notifyClientsThatApplicationStateChanged;
- (void)addDebuggable:(id)a0;
- (void)addDrivable:(id)a0;
- (void)changeReadyState:(BOOL)a0;
- (void)createDrivableForSession:(id)a0;
- (id)debuggableWithPageId:(id)a0;
- (id)drivableWithTargetIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 name:(id)a2 iconData:(id)a3 isProxy:(BOOL)a4 debuggerAvailability:(unsigned long long)a5 isReady:(BOOL)a6 target:(id)a7;
- (void)removeDebuggable:(id)a0;
- (void)setAutomationAvailability:(long long)a0;
- (void)setDebuggerAvailability:(unsigned long long)a0;

@end
