@class NSArray;

@interface AVBMediaClockSequence : NSObject

@property (readonly, copy, nonatomic) NSArray *mediaClock;

+ (id)mediaClockSequenceWithTimestamps:(unsigned long long *)a0 sampleTimes:(unsigned long long *)a1 count:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)generatePythonScriptWithOutputPath:(id)a0 fileName:(id)a1 titleName:(id)a2 plotPath:(id)a3 showPlot:(BOOL)a4;
- (BOOL)exportMediaClockToDirectoryURL:(id)a0;
- (BOOL)exportMediaClockToDirectoryURL:(id)a0 withFilename:(id)a1;
- (id)initWithMediaClock:(id)a0;

@end
