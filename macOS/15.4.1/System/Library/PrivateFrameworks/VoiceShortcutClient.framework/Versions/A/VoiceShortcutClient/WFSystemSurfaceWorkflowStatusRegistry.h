@class NSUserDefaults;

@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject

@property (readonly, nonatomic) NSUserDefaults *shortcutsUserDefaults;

- (id)init;
- (void).cxx_destruct;
- (BOOL)performShareSheetOptIn;
- (BOOL)setStatus:(unsigned long long)a0 forSystemSurface:(unsigned long long)a1;
- (BOOL)setStatusForServicesWorkflows:(unsigned long long)a0;
- (BOOL)setStatusForShareSheetWorkflows:(unsigned long long)a0;
- (unsigned long long)statusForServicesWorkflows;
- (unsigned long long)statusForShareSheetWorkflows;
- (unsigned long long)statusForSystemSurface:(unsigned long long)a0;

@end
