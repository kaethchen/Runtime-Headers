@class NSString, NSURL, NSImage;

@interface SMSystem_Daemon_Ineligible : SMSystem_Daemon

@property (retain) NSString *systemName;
@property (retain) NSURL *path;
@property unsigned long long systemType;
@property (readonly) NSString *reason;
@property BOOL obsoleteSoftware;
@property (retain) NSImage *overrideIcon;

- (BOOL)enabled;
- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)initWithPath:(id)a0 andReason:(id)a1;
- (id)initWithURL:(id)a0 systemName:(id)a1 andReason:(id)a2;
- (id)initWithURL:(id)a0 systemName:(id)a1 andReason:(id)a2 pc:(BOOL)a3;
- (BOOL)selectableSystem;
- (id)warningBadge;

@end
