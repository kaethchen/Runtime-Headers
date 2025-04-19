@class PodController, Pod;

@interface PodUpdaterController : NSObject {
    int _updaterState;
    PodController *_podController;
    int _updaterError;
    unsigned int _instructions;
    Pod *_currentUpdatingPod;
    BOOL _formatAsFAT;
}

+ (void)deletePod:(id)a0;

- (void)dealloc;
- (id)init;
- (int)state;
- (void)setState:(int)a0;
- (float)progress;
- (unsigned int)instructions;
- (int)updateError;
- (void)operationComplete:(id)a0;
- (void)setOption:(int)a0 toValue:(int)a1;
- (int)getOption:(int)a0;
- (void)progressUpdate:(id)a0;
- (BOOL)isPodValid:(id)a0;
- (void)operationFailed:(id)a0;
- (id)podWithGUID:(unsigned short *)a0;
- (void)progressMessage:(id)a0;
- (void)setCurrentUpdatingPod:(id)a0;

@end
