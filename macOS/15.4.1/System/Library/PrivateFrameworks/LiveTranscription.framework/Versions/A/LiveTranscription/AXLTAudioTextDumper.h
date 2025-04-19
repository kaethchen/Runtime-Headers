@class NSString, AVAudioFile, NSObject;
@protocol OS_dispatch_queue;

@interface AXLTAudioTextDumper : NSObject {
    BOOL _dumpTestData;
}

@property (class, readonly) AXLTAudioTextDumper *sharedInstance;

@property (retain, nonatomic) AVAudioFile *audioFile;
@property (retain, nonatomic) NSString *textFileName;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveQueue;

+ (BOOL)isInternalInstall;

- (id)init;
- (void).cxx_destruct;
- (void)cleanUp;
- (void)saveAudioBuffer:(id)a0 appName:(id)a1 sessionStartTime:(id)a2;
- (void)saveTranscribedText:(id)a0 appName:(id)a1 sessionStartTime:(id)a2;

@end
