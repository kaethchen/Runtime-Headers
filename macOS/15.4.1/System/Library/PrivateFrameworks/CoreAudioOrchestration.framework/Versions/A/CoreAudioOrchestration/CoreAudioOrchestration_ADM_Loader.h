@class NSObject;
@protocol OS_os_log;

@interface CoreAudioOrchestration_ADM_Loader : NSObject {
    NSObject<OS_os_log> *logger;
}

@property (nonatomic) void *admLibrary;

- (void)dealloc;
- (void).cxx_destruct;
- (id)createFactory;
- (id)initWithLogger:(id)a0;

@end
