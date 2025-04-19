@class NSMutableArray;

@interface _MLTPerfTraceTimeObject : NSObject

@property unsigned long long sampleStartTime;
@property BOOL inMeasurement;
@property int numSamples;
@property double sumOfSquares;
@property double sum;
@property (retain) NSMutableArray *allValues;

- (id)init;
- (void).cxx_destruct;
- (double)max;
- (double)min;
- (double)mean;
- (double)variance;
- (double)median;
- (id)startSampling;
- (id)stopSampling;
- (id)getMeasurementDict;
- (void)insertDeltaMilliSec:(double)a0;
- (id)recordCompletedAsyncRequestCount:(int)a0;

@end
